#include <ros/ros.h>
#include <ros/package.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/xfeatures2d.hpp>
#include <opencv/cv.hpp>
#include <cv_bridge/cv_bridge.h>
#include <geometry_msgs/PoseStamped.h>
#include <tf/transform_listener.h>

#include <algorithm>
#include <cmath>
#include <stdlib.h>


#define METRE_TO_PIXEL_SCALE 50
#define FORWARD_SWIM_SPEED_SCALING 0.1
#define POSITION_GRAPHIC_RADIUS 20.0
#define HEADING_GRAPHIC_LENGTH 50.0
#define MIN_FEATURE_NUM 10

#define MAX_PARTICLES 1000
namespace enc = sensor_msgs::image_encodings;
using namespace cv;
using namespace cv::xfeatures2d;

// Class Localizer is a sample stub that you can build upon for your implementation
// (advised but optional: starting from scratch is also fine)
//
class Localizer {

public:
  ros::NodeHandle nh;
  image_transport::Publisher pub;
  image_transport::Subscriber gt_img_sub;
  image_transport::Subscriber robot_img_sub;
  ros::Publisher estimate_pub;
  // ros::Publisher observation_pub;

  ros::Subscriber motion_command_sub;
  // ros::Subscriber observation_sub;

  geometry_msgs::PoseStamped estimated_location;
  geometry_msgs::PoseStamped observed_location;

  cv::Mat map_image;
  cv::Mat localization_result_image;
  int estimated_x_pixels;
  int estimated_y_pixels;
  int estimated_angle;
  int map_center_x;
  int map_center_y;
  Point2f robot_cord_location;
  Point2f robot_cord_location_meter;


  //define the particles, each particle contains the cordinates (x,y) and heading yaw, and their probablity weight
  struct Particle
  {
  	double x;
  	double y;
  	double yaw;
  	double weight;
  };
  std::vector<Particle> particles;
  std::default_random_engine rand_num_gen;

  Localizer( int argc, char** argv ){

    image_transport::ImageTransport it(nh);
    pub = it.advertise("/assign1/localization_debug_image", 1);
    estimate_pub = nh.advertise<geometry_msgs::PoseStamped>( "/assign1/localization_estimate",1);
    // observation_pub = nh.advertise<geometry_msgs::PoseStamped>("/assign1/localization_observation",1);
    std::string ag_path = ros::package::getPath("aqua_gazebo");
    map_image = cv::imread((ag_path+"/materials/fishermans_small.png").c_str(), CV_LOAD_IMAGE_COLOR);

    estimated_location.pose.position.x = 0;
    estimated_location.pose.position.y = 0;

    observed_location.pose.position.x = 0;
    observed_location.pose.position.y = 0;


	  // 0,0 in real coordinates == center image in pixels
 	map_center_x = map_image.size().width/2;
  	map_center_y = map_image.size().height/2;

	  // Initialize particles around the (0,0)
  	std::normal_distribution<double> location_dis(0.0,12.0);
  	std::normal_distribution<double> heading_dis(0.0,0.19);

    for (int i = 0; i < MAX_PARTICLES; ++i)
    {
    	/* loop all particles */
        particles.push_back(Particle());
        particles[i].x = map_center_x + std::roundl(location_dis(rand_num_gen));
        particles[i].y = map_center_y + std::roundl(location_dis(rand_num_gen));
        particles[i].yaw = heading_dis(rand_num_gen);
        particles[i].weight = 1;
    }

    localization_result_image = map_image.clone();

    robot_img_sub = it.subscribe("/aqua/back_down/image_raw", 1, &Localizer::robotImageCallback, this);
    motion_command_sub = nh.subscribe<geometry_msgs::PoseStamped>("/aqua/target_pose", 1, &Localizer::motionCommandCallback, this);

    ROS_INFO( "localizer node constructed and subscribed." );
  
}
  void robotImageCallback( const sensor_msgs::ImageConstPtr& robot_img ){

    // TODO: You must fill in the code here to implement an observation model for your localizer

    // This is the robot observation code.
    // provide me the position x, y and the heading theta
      	// cv::Mat target_image = cv::imdecode(cv::Mat(robot_img->data),1);
  	cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(robot_img, enc::BGR8);
  	cv::Mat target_image = cv_ptr->image;
  	//std::cout<< "Heading angle: "<<std::endl
  	cv::Mat img_scene = map_image;
    cv::Mat img_object = cv_ptr->image;
    int map_width = img_scene.cols;
    int map_height = img_scene.rows;
    // std::cout<< "Map width: " << map_width << "Map height: " << map_height << std::endl;
    Point2f center_in_map = cvPoint(0.5 * map_width, 0.5* map_height );

    if( !img_object.data || !img_scene.data )
    { std::cout<< " --(!) Error reading images " << std::endl; }

    //-- Step 1: Detect the keypoints using SURF Detector
    int minHessian = 400;
    Ptr<SURF> detector = SURF::create();
    detector->setHessianThreshold(minHessian);
    //SurfFeatureDetector detector( minHessian );

    std::vector<KeyPoint> keypoints_object, keypoints_scene;

    detector->detect( img_object, keypoints_object );
    detector->detect( img_scene, keypoints_scene );

    //-- Step 2: Calculate descriptors (feature vectors)
    Ptr<SURF> extractor = SURF::create();

    Mat descriptors_object, descriptors_scene;

    extractor->compute( img_object, keypoints_object, descriptors_object );
    extractor->compute( img_scene, keypoints_scene, descriptors_scene );

    //-- Step 3: Matching descriptor vectors using FLANN matcher
    FlannBasedMatcher matcher;
    std::vector< DMatch > matches;
    matcher.match( descriptors_object, descriptors_scene, matches );

    double max_dist = 0; double min_dist = 100;

    //-- Quick calculation of max and min distances between keypoints
    for( int i = 0; i < descriptors_object.rows; i++ )
    { double dist = matches[i].distance;
        if( dist < min_dist ) min_dist = dist;
        if( dist > max_dist ) max_dist = dist;
    }

    // printf("-- Max dist : %f \n", max_dist );
    // printf("-- Min dist : %f \n", min_dist );

    //-- Draw only "good" matches (i.e. whose distance is less than 3*min_dist )
    std::vector< DMatch > good_matches;

    for( int i = 0; i < descriptors_object.rows; i++ )
    { if( matches[i].distance < 3.5*min_dist )
        { good_matches.push_back( matches[i]); }
    }


    if(good_matches.size() > 10)
    {
    	Mat img_matches;

//    drawMatches( img_object, keypoints_object, img_scene, keypoints_scene,
//                 good_matches, img_matches, Scalar::all(-1), Scalar::all(-1),
//                 vector<char>(), DrawMatchesFlags::NOT_DRAW_SINGLE_POINTS );

    //-- Localize the object
    std::vector<Point2f> obj;
    std::vector<Point2f> scene;

    for( int i = 0; i < good_matches.size(); i++ )
    {
        //-- Get the keypoints from the good matches
        obj.push_back( keypoints_object[ good_matches[i].queryIdx ].pt );
        scene.push_back( keypoints_scene[ good_matches[i].trainIdx ].pt );
    }

    Mat H = findHomography( obj, scene, CV_RANSAC );

    //-- Get the corners from the image_1 ( the object to be "detected" )
    std::vector<Point2f> obj_corners(4);
    obj_corners[0] = cvPoint(0,0);
    obj_corners[1] = cvPoint( img_object.cols, 0 );
    obj_corners[2] = cvPoint( img_object.cols, img_object.rows );
    obj_corners[3] = cvPoint( 0, img_object.rows );
    std::vector<Point2f> scene_corners(4);

    perspectiveTransform( obj_corners, scene_corners, H);

    //-- Draw lines between the corners (the mapped object in the scene - image_2 )
//    line( img_matches, scene_corners[0] + Point2f( img_object.cols, 0), scene_corners[1] + Point2f( img_object.cols, 0), Scalar(0, 255, 0), 4 );
//    line( img_matches, scene_corners[1] + Point2f( img_object.cols, 0), scene_corners[2] + Point2f( img_object.cols, 0), Scalar( 0, 255, 0), 4 );
//    line( img_matches, scene_corners[2] + Point2f( img_object.cols, 0), scene_corners[3] + Point2f( img_object.cols, 0), Scalar( 0, 255, 0), 4 );
//    line( img_matches, scene_corners[3] + Point2f( img_object.cols, 0), scene_corners[0] + Point2f( img_object.cols, 0), Scalar( 0, 255, 0), 4 );
    Point2f heading_start = 0.5*(scene_corners[2] + scene_corners[3])+ Point2f( img_object.cols, 0);
    Point2f heading_end = 0.5*(scene_corners[0] + scene_corners[1]) + Point2f( img_object.cols, 0);
//    arrowedLine( img_matches,  heading_start, heading_end,Scalar(0,255,255),4);

//    std::cout<< "SceneCorner0 X: " << scene_corners[0].x << "Scene Corner0 Y: " << scene_corners[0].y << std::endl;
    Point2f shift = Point2f( img_object.cols,0);
    Point2f robot_img_location = 0.5 * (0.5*(scene_corners[2] + scene_corners[3]) + 0.5*(scene_corners[0] + scene_corners[1]));
    robot_cord_location = robot_img_location - center_in_map;
    robot_cord_location_meter = robot_cord_location / METRE_TO_PIXEL_SCALE;
    // std::cout<< "meter X: " << robot_cord_location_meter.x << "meter Y: " << robot_cord_location_meter.y << std::endl;


    std::cout<< "Center X: " << robot_cord_location.x << "Center Y: " << robot_cord_location.y << std::endl;
//    cv::circle(img_matches,robot_img_location + shift, 20,Scalar(0,255,155),3);
//    cv::circle(img_matches,center_in_map,20,Scalar(0,156,255),4);
    //-- Show detected matches
//    arrowedLine( img_matches,  heading_start - shift, heading_end -shift,Scalar(0,255,255),4);
//    imshow( "Feature Matched", img_matches );
//    std::cout<< "relative robot position X: " << robot_cord_location.x << "relative robot position Y: " << robot_cord_location.y << std::endl;



    //this part, the x y input of atan2 was intentionally adjusted for the pi/2 difference of the cv environment and ros environment
    // rotate pi/2 backward means x and y switch and one should be minus, and the minus position means the direction, which is the first -y is the right answer
    double observed_yaw = atan2(heading_start.y - heading_end.y, heading_end.x - heading_start.x);

    observed_location.pose.position.x = robot_cord_location_meter.x;
    observed_location.pose.position.y = robot_cord_location_meter.y;
    observed_location.pose.orientation = tf::createQuaternionMsgFromYaw(observed_yaw);
    //observation_pub.publish(observed_location);

    // std::cout<< "Heading angle: " << yaw <<std::endl;
    }
    else{
    	 std::cout<<"Lost Visual contact, switch to estimation mode ..." << std::endl;
    	 //TODO: estimation
    }

    
  }
  void renderParticle(int x, int y)
  {
    double radius = 10.0;
    cv::circle(localization_result_image, cv::Point(x, y), radius, CV_RGB(0,250,0), -1);
  }

  void drawBelief()
  {
    double belief_x = METRE_TO_PIXEL_SCALE * particles[0].x + localization_result_image.size().width/2;
    double belief_y = METRE_TO_PIXEL_SCALE * particles[0].y + localization_result_image.size().height/2;
    double radius = 15.0;
    cv::circle(localization_result_image, cv::Point(belief_x, belief_y), radius, CV_RGB(250,0,250), -1);
  }

  void updateParticleWeights(double estimate_x, double estimate_y, double estimate_yaw){
  	localization_result_image = map_image.clone();
  	for (int i = 0; i < MAX_PARTICLES; ++i)
  	{
  		/* update Each Particle's weight according to their position relative to the observation*/
  		double x_contribution = 1/3*(std::abs(particles[i].x - estimate_x));
  		double y_contribution = 1/3*(std::abs(particles[i].y - estimate_y));
  		double yaw_contribution = 1/5*(std::abs(particles[i].yaw - estimate_yaw));
  		particles[i].weight = x_contribution + y_contribution + 0.85*yaw_contribution;
  	}
  }

    bool static compareCallBack(const Particle &a, const Particle &b)
  {
    return a.weight > b.weight;
  }



  void resample(double guessX, double guessY, double guessYaw)
  {
    std::normal_distribution<double> location_dis(0.0,12.0);
    std::normal_distribution<double> heading_dis(0.0,0.019);
    std::exponential_distribution<double> exp_location_dis(0.1);

    std::sort(particles.begin(), particles.end(), compareCallBack);
    std::vector<Particle> oldParticles (particles);
    
    //localization_result_image = map_image.clone();

    std::cout<<"Particle Cords: [" << particles[0].x << "," << particles[0].y << "]"<<std::endl;

    for (int i = 0; i < MAX_PARTICLES; i++)
    { 
      int index =  std::roundl(exp_location_dis (rand_num_gen));
      particles[i] = oldParticles[index];
      particles[i].weight = 1; // Resampled particles all have equal weight
      particles[i].x =  0.01*std::roundl(location_dis(rand_num_gen)) + (guessX);
      particles[i].y =  0.01*std::roundl(location_dis(rand_num_gen)) + (guessY);
      particles[i].yaw = 0.01*heading_dis(rand_num_gen) + guessYaw;
      renderParticle(particles[i].x,particles[i].y);
    }
  }

  // Function motionCommandCallback is a example of how to work with Aqua's motion commands (your view on the odometry).
  // The initial version simply integrates the commands over time to make a very rough location estimate.
  // TODO: You must improve it to work with the localizer you implement.
  //
  // Note the somewhat unique meaning of fields in motion_command
  //    motion_command
  //      pose
  //        position
  //          x - requested forward swim effort in a unitless number ranging from 0.0 to 1.0. You must translate this into
  //              a velocity estimate in some way. Currently a simple constant is used.
  //          y - requested up/down swim effort. Not used in this assignment
  //          z - unused
  //        orientation - A quaternion that represents the desired body orientation w.r.t. global frame. Note that
  //                      Aqua's controller will not achieve this orientation perfectly, so you must consider that
  //                      this is only a noisy estimate of the robot's orientation (correct for it with your filter!)
  //
  // Note that we use negative angles because the geometry of the map image is formed with its Z axis pointing downwards
  // (the camera is looking at the ocean floor)
  //
  void motionCommandCallback(const geometry_msgs::PoseStamped::ConstPtr& motion_command ){

    geometry_msgs::PoseStamped command = *motion_command;
    double target_roll, target_pitch, target_yaw;
    tf::Quaternion target_orientation;
    tf::quaternionMsgToTF(command.pose.orientation, target_orientation);
    tf::Matrix3x3(target_orientation).getEulerYPR( target_yaw, target_pitch, target_roll );

    // The following three lines implement the basic motion model example
    // Guessed Position
    estimated_location.pose.position.x = estimated_location.pose.position.x + FORWARD_SWIM_SPEED_SCALING * command.pose.position.x * cos( -target_yaw );
    estimated_location.pose.position.y = estimated_location.pose.position.y + FORWARD_SWIM_SPEED_SCALING * command.pose.position.x * sin( -target_yaw );
    estimated_location.pose.orientation = command.pose.orientation;
    
    double junk_roll, junk_pitch, junk_yaw;
    tf::Quaternion observed_orientation;
    tf::quaternionMsgToTF(observed_location.pose.orientation, observed_orientation);
    tf::Matrix3x3(observed_orientation).getEulerYPR(junk_yaw,junk_pitch,junk_roll);

    double estimatedX = FORWARD_SWIM_SPEED_SCALING * cos( -target_yaw )*METRE_TO_PIXEL_SCALE;
    double estimatedY = FORWARD_SWIM_SPEED_SCALING *  sin( -target_yaw )*METRE_TO_PIXEL_SCALE;
    // Update Position
    updateParticleWeights(observed_location.pose.position.x,observed_location.pose.position.y,junk_yaw);
    resample(observed_location.pose.position.x,observed_location.pose.position.y, junk_yaw);
    
    estimated_location.pose.position.x = particles[0].x;
    estimated_location.pose.position.y = particles[0].y;
    estimated_location.pose.orientation = tf::createQuaternionMsgFromYaw(particles[0].yaw);
    //estimated_location = observed_location;


    // The remainder of this function is sample drawing code to plot your answer on the map image.

    // This line resets the image to the original map so you can start drawing fresh each time.
    // Comment the one following line to plot your whole trajectory
    //localization_result_image = map_image.clone();

    int estimated_robo_image_x = localization_result_image.size().width/2 + METRE_TO_PIXEL_SCALE * estimated_location.pose.position.x;
    int estimated_robo_image_y = localization_result_image.size().height/2 + METRE_TO_PIXEL_SCALE * estimated_location.pose.position.y;

    int estimated_heading_image_x = estimated_robo_image_x + HEADING_GRAPHIC_LENGTH * cos(-target_yaw);
    int estimated_heading_image_y = estimated_robo_image_y + HEADING_GRAPHIC_LENGTH * sin(-target_yaw);

    cv::circle( localization_result_image, cv::Point(estimated_robo_image_x, estimated_robo_image_y), POSITION_GRAPHIC_RADIUS, CV_RGB(250,0,0), -1);
    cv::line( localization_result_image, cv::Point(estimated_robo_image_x, estimated_robo_image_y), cv::Point(estimated_heading_image_x, estimated_heading_image_y), CV_RGB(250,0,0), 10);
    drawBelief();
    for (int i = 0; i < MAX_PARTICLES; ++i)
    {
    	/* code */
    	cv::circle(localization_result_image, cv::Point(localization_result_image.size().width/2 + METRE_TO_PIXEL_SCALE * particles[i].x, localization_result_image.size().height/2 + METRE_TO_PIXEL_SCALE * particles[i].y), 4, CV_RGB(0,250,0), -1);
    }

    //observation_sub = nh.subscribe<geometry_msgs::PoseStamped>("/assign1/localization_observation", 1, &Localizer::locationUpdateCallback, this);

    estimate_pub.publish( estimated_location );
  }


 


  // This function publishes your localization result image and spins ROS to execute its callbacks
  void spin(){

    ros::Rate loop_rate(30);
    while (nh.ok()) {
      sensor_msgs::ImagePtr msg = cv_bridge::CvImage(std_msgs::Header(), "bgr8", localization_result_image).toImageMsg();
      pub.publish(msg);

      ros::spinOnce();
      loop_rate.sleep();
    }
  }
};

int main(int argc, char** argv){

  ros::init(argc, argv, "localizer");
  Localizer my_loc(argc, argv);
  my_loc.spin();
}
