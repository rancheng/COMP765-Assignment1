// Generated by gencpp from file aquacore/DumpAllVarsRequest.msg
// DO NOT EDIT!


#ifndef AQUACORE_MESSAGE_DUMPALLVARSREQUEST_H
#define AQUACORE_MESSAGE_DUMPALLVARSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace aquacore
{
template <class ContainerAllocator>
struct DumpAllVarsRequest_
{
  typedef DumpAllVarsRequest_<ContainerAllocator> Type;

  DumpAllVarsRequest_()
    : current(false)  {
    }
  DumpAllVarsRequest_(const ContainerAllocator& _alloc)
    : current(false)  {
  (void)_alloc;
    }



   typedef uint8_t _current_type;
  _current_type current;




  typedef boost::shared_ptr< ::aquacore::DumpAllVarsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aquacore::DumpAllVarsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DumpAllVarsRequest_

typedef ::aquacore::DumpAllVarsRequest_<std::allocator<void> > DumpAllVarsRequest;

typedef boost::shared_ptr< ::aquacore::DumpAllVarsRequest > DumpAllVarsRequestPtr;
typedef boost::shared_ptr< ::aquacore::DumpAllVarsRequest const> DumpAllVarsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::aquacore::DumpAllVarsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::aquacore::DumpAllVarsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace aquacore

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'aquacore': ['/home/ran/Documents/Assignment1/src/aquacore/msg', '/home/ran/Documents/Assignment1/devel/share/aquacore/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::aquacore::DumpAllVarsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aquacore::DumpAllVarsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aquacore::DumpAllVarsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aquacore::DumpAllVarsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aquacore::DumpAllVarsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aquacore::DumpAllVarsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::aquacore::DumpAllVarsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "505dc5e366ed09a17f865d02426eb5e3";
  }

  static const char* value(const ::aquacore::DumpAllVarsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x505dc5e366ed09a1ULL;
  static const uint64_t static_value2 = 0x7f865d02426eb5e3ULL;
};

template<class ContainerAllocator>
struct DataType< ::aquacore::DumpAllVarsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aquacore/DumpAllVarsRequest";
  }

  static const char* value(const ::aquacore::DumpAllVarsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::aquacore::DumpAllVarsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool current\n\
";
  }

  static const char* value(const ::aquacore::DumpAllVarsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::aquacore::DumpAllVarsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.current);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DumpAllVarsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aquacore::DumpAllVarsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::aquacore::DumpAllVarsRequest_<ContainerAllocator>& v)
  {
    s << indent << "current: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.current);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AQUACORE_MESSAGE_DUMPALLVARSREQUEST_H