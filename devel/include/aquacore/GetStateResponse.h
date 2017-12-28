// Generated by gencpp from file aquacore/GetStateResponse.msg
// DO NOT EDIT!


#ifndef AQUACORE_MESSAGE_GETSTATERESPONSE_H
#define AQUACORE_MESSAGE_GETSTATERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <aquacore/StateMsg.h>

namespace aquacore
{
template <class ContainerAllocator>
struct GetStateResponse_
{
  typedef GetStateResponse_<ContainerAllocator> Type;

  GetStateResponse_()
    : state()  {
    }
  GetStateResponse_(const ContainerAllocator& _alloc)
    : state(_alloc)  {
  (void)_alloc;
    }



   typedef  ::aquacore::StateMsg_<ContainerAllocator>  _state_type;
  _state_type state;




  typedef boost::shared_ptr< ::aquacore::GetStateResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aquacore::GetStateResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetStateResponse_

typedef ::aquacore::GetStateResponse_<std::allocator<void> > GetStateResponse;

typedef boost::shared_ptr< ::aquacore::GetStateResponse > GetStateResponsePtr;
typedef boost::shared_ptr< ::aquacore::GetStateResponse const> GetStateResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::aquacore::GetStateResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::aquacore::GetStateResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace aquacore

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'aquacore': ['/home/ran/Documents/Assignment1/src/aquacore/msg', '/home/ran/Documents/Assignment1/devel/share/aquacore/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::aquacore::GetStateResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aquacore::GetStateResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aquacore::GetStateResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aquacore::GetStateResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aquacore::GetStateResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aquacore::GetStateResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::aquacore::GetStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eed0983a56703471598bb1e571d9dddf";
  }

  static const char* value(const ::aquacore::GetStateResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeed0983a56703471ULL;
  static const uint64_t static_value2 = 0x598bb1e571d9dddfULL;
};

template<class ContainerAllocator>
struct DataType< ::aquacore::GetStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aquacore/GetStateResponse";
  }

  static const char* value(const ::aquacore::GetStateResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::aquacore::GetStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "StateMsg state\n\
\n\
\n\
================================================================================\n\
MSG: aquacore/StateMsg\n\
Header header\n\
int32 LED\n\
int32 Gait\n\
\n\
float32 RollAngle\n\
float32 PitchAngle\n\
float32 YawAngle\n\
\n\
float32 RollTargetAngle\n\
float32 PitchTargetAngle\n\
float32 YawTargetAngle\n\
float32 DepthTarget\n\
\n\
float32 AvgRollCommand\n\
float32 AvgPitchCommand\n\
float32 AvgYawCommand\n\
float32 AvgHeaveCommand\n\
float32 AvgSurgeCommand\n\
\n\
int32 AutopilotMode\n\
float32 Depth\n\
float32 Speed\n\
\n\
float32[] LegCurrents\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::aquacore::GetStateResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::aquacore::GetStateResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetStateResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aquacore::GetStateResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::aquacore::GetStateResponse_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    s << std::endl;
    Printer< ::aquacore::StateMsg_<ContainerAllocator> >::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AQUACORE_MESSAGE_GETSTATERESPONSE_H