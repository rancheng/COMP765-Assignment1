// Generated by gencpp from file aquacore/GetNamedFloatResponse.msg
// DO NOT EDIT!


#ifndef AQUACORE_MESSAGE_GETNAMEDFLOATRESPONSE_H
#define AQUACORE_MESSAGE_GETNAMEDFLOATRESPONSE_H


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
struct GetNamedFloatResponse_
{
  typedef GetNamedFloatResponse_<ContainerAllocator> Type;

  GetNamedFloatResponse_()
    : value(0.0)  {
    }
  GetNamedFloatResponse_(const ContainerAllocator& _alloc)
    : value(0.0)  {
  (void)_alloc;
    }



   typedef float _value_type;
  _value_type value;




  typedef boost::shared_ptr< ::aquacore::GetNamedFloatResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aquacore::GetNamedFloatResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetNamedFloatResponse_

typedef ::aquacore::GetNamedFloatResponse_<std::allocator<void> > GetNamedFloatResponse;

typedef boost::shared_ptr< ::aquacore::GetNamedFloatResponse > GetNamedFloatResponsePtr;
typedef boost::shared_ptr< ::aquacore::GetNamedFloatResponse const> GetNamedFloatResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::aquacore::GetNamedFloatResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::aquacore::GetNamedFloatResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::aquacore::GetNamedFloatResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aquacore::GetNamedFloatResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aquacore::GetNamedFloatResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aquacore::GetNamedFloatResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aquacore::GetNamedFloatResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aquacore::GetNamedFloatResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::aquacore::GetNamedFloatResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0aca93dcf6d857f0e5a0dc6be1eaa9fb";
  }

  static const char* value(const ::aquacore::GetNamedFloatResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0aca93dcf6d857f0ULL;
  static const uint64_t static_value2 = 0xe5a0dc6be1eaa9fbULL;
};

template<class ContainerAllocator>
struct DataType< ::aquacore::GetNamedFloatResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aquacore/GetNamedFloatResponse";
  }

  static const char* value(const ::aquacore::GetNamedFloatResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::aquacore::GetNamedFloatResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 value\n\
\n\
";
  }

  static const char* value(const ::aquacore::GetNamedFloatResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::aquacore::GetNamedFloatResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetNamedFloatResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aquacore::GetNamedFloatResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::aquacore::GetNamedFloatResponse_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<float>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AQUACORE_MESSAGE_GETNAMEDFLOATRESPONSE_H
