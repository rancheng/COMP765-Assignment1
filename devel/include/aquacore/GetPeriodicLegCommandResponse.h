// Generated by gencpp from file aquacore/GetPeriodicLegCommandResponse.msg
// DO NOT EDIT!


#ifndef AQUACORE_MESSAGE_GETPERIODICLEGCOMMANDRESPONSE_H
#define AQUACORE_MESSAGE_GETPERIODICLEGCOMMANDRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace aquacore
{
template <class ContainerAllocator>
struct GetPeriodicLegCommandResponse_
{
  typedef GetPeriodicLegCommandResponse_<ContainerAllocator> Type;

  GetPeriodicLegCommandResponse_()
    : stamp()
    , frequencies()
    , amplitudes()
    , leg_offsets()
    , phase_offsets()  {
      frequencies.assign(0.0);

      amplitudes.assign(0.0);

      leg_offsets.assign(0.0);

      phase_offsets.assign(0.0);
  }
  GetPeriodicLegCommandResponse_(const ContainerAllocator& _alloc)
    : stamp(_alloc)
    , frequencies()
    , amplitudes()
    , leg_offsets()
    , phase_offsets()  {
  (void)_alloc;
      frequencies.assign(0.0);

      amplitudes.assign(0.0);

      leg_offsets.assign(0.0);

      phase_offsets.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _stamp_type;
  _stamp_type stamp;

   typedef boost::array<double, 6>  _frequencies_type;
  _frequencies_type frequencies;

   typedef boost::array<double, 6>  _amplitudes_type;
  _amplitudes_type amplitudes;

   typedef boost::array<double, 6>  _leg_offsets_type;
  _leg_offsets_type leg_offsets;

   typedef boost::array<double, 6>  _phase_offsets_type;
  _phase_offsets_type phase_offsets;




  typedef boost::shared_ptr< ::aquacore::GetPeriodicLegCommandResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aquacore::GetPeriodicLegCommandResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetPeriodicLegCommandResponse_

typedef ::aquacore::GetPeriodicLegCommandResponse_<std::allocator<void> > GetPeriodicLegCommandResponse;

typedef boost::shared_ptr< ::aquacore::GetPeriodicLegCommandResponse > GetPeriodicLegCommandResponsePtr;
typedef boost::shared_ptr< ::aquacore::GetPeriodicLegCommandResponse const> GetPeriodicLegCommandResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::aquacore::GetPeriodicLegCommandResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::aquacore::GetPeriodicLegCommandResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::aquacore::GetPeriodicLegCommandResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aquacore::GetPeriodicLegCommandResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aquacore::GetPeriodicLegCommandResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aquacore::GetPeriodicLegCommandResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aquacore::GetPeriodicLegCommandResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aquacore::GetPeriodicLegCommandResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::aquacore::GetPeriodicLegCommandResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d3befc8a5e5142617cdb8fa5f1aeaff0";
  }

  static const char* value(const ::aquacore::GetPeriodicLegCommandResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd3befc8a5e514261ULL;
  static const uint64_t static_value2 = 0x7cdb8fa5f1aeaff0ULL;
};

template<class ContainerAllocator>
struct DataType< ::aquacore::GetPeriodicLegCommandResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aquacore/GetPeriodicLegCommandResponse";
  }

  static const char* value(const ::aquacore::GetPeriodicLegCommandResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::aquacore::GetPeriodicLegCommandResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header stamp\n\
float64[6] frequencies\n\
float64[6] amplitudes\n\
float64[6] leg_offsets\n\
float64[6] phase_offsets\n\
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

  static const char* value(const ::aquacore::GetPeriodicLegCommandResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::aquacore::GetPeriodicLegCommandResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.frequencies);
      stream.next(m.amplitudes);
      stream.next(m.leg_offsets);
      stream.next(m.phase_offsets);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetPeriodicLegCommandResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aquacore::GetPeriodicLegCommandResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::aquacore::GetPeriodicLegCommandResponse_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.stamp);
    s << indent << "frequencies[]" << std::endl;
    for (size_t i = 0; i < v.frequencies.size(); ++i)
    {
      s << indent << "  frequencies[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.frequencies[i]);
    }
    s << indent << "amplitudes[]" << std::endl;
    for (size_t i = 0; i < v.amplitudes.size(); ++i)
    {
      s << indent << "  amplitudes[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.amplitudes[i]);
    }
    s << indent << "leg_offsets[]" << std::endl;
    for (size_t i = 0; i < v.leg_offsets.size(); ++i)
    {
      s << indent << "  leg_offsets[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.leg_offsets[i]);
    }
    s << indent << "phase_offsets[]" << std::endl;
    for (size_t i = 0; i < v.phase_offsets.size(); ++i)
    {
      s << indent << "  phase_offsets[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.phase_offsets[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // AQUACORE_MESSAGE_GETPERIODICLEGCOMMANDRESPONSE_H