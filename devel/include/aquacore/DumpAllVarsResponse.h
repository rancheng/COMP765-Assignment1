// Generated by gencpp from file aquacore/DumpAllVarsResponse.msg
// DO NOT EDIT!


#ifndef AQUACORE_MESSAGE_DUMPALLVARSRESPONSE_H
#define AQUACORE_MESSAGE_DUMPALLVARSRESPONSE_H


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
struct DumpAllVarsResponse_
{
  typedef DumpAllVarsResponse_<ContainerAllocator> Type;

  DumpAllVarsResponse_()
    : foreaft(0.0)
    , leftright(0.0)
    , yaw(0.0)
    , roll(0.0)
    , pitch(0.0)
    , heave(0.0)
    , speed(0.0)
    , visYawCmd(0.0)
    , visPitchCmd(0.0)
    , visSpeedCmd(0.0)
    , isSpeedValid(false)
    , gaitID(0)
    , commandWord(0)
    , PitchTrim(0.0)
    , RollTrim(0.0)
    , YawTrim(0.0)
    , YawGyroDrift(0.0)
    , gaitselect(0)
    , enableIntegration(0)
    , visEnable(0)
    , setLEDs(0)
    , AutopilotSelect(0)
    , AutopilotMode(0)
    , update(0)
    , modePause(0)
    , zeroDepth(0)
    , SetGyro(0)
    , SetGyroValue(0.0)
    , period(0.0)
    , oscRatio(0.0)
    , amplitude(0.0)
    , iir(0.0)
    , visYawGain(0.0)
    , visPitchGain(0.0)
    , visSpeedGain(0.0)
    , actuatorOffset(0.0)
    , GuiTargetDepth(0.0)
    , ApTargetRollCmd(0.0)
    , ApTargetPitchCmd(0.0)
    , ApTargetYawCmd(0.0)
    , GuiParam0(0.0)
    , GuiParam1(0.0)
    , GuiParam2(0.0)
    , GuiParam3(0.0)
    , GuiParam4(0.0)
    , GuiParam5(0.0)
    , GuiParam6(0.0)
    , GuiParam7(0.0)
    , GuiParam8(0.0)  {
    }
  DumpAllVarsResponse_(const ContainerAllocator& _alloc)
    : foreaft(0.0)
    , leftright(0.0)
    , yaw(0.0)
    , roll(0.0)
    , pitch(0.0)
    , heave(0.0)
    , speed(0.0)
    , visYawCmd(0.0)
    , visPitchCmd(0.0)
    , visSpeedCmd(0.0)
    , isSpeedValid(false)
    , gaitID(0)
    , commandWord(0)
    , PitchTrim(0.0)
    , RollTrim(0.0)
    , YawTrim(0.0)
    , YawGyroDrift(0.0)
    , gaitselect(0)
    , enableIntegration(0)
    , visEnable(0)
    , setLEDs(0)
    , AutopilotSelect(0)
    , AutopilotMode(0)
    , update(0)
    , modePause(0)
    , zeroDepth(0)
    , SetGyro(0)
    , SetGyroValue(0.0)
    , period(0.0)
    , oscRatio(0.0)
    , amplitude(0.0)
    , iir(0.0)
    , visYawGain(0.0)
    , visPitchGain(0.0)
    , visSpeedGain(0.0)
    , actuatorOffset(0.0)
    , GuiTargetDepth(0.0)
    , ApTargetRollCmd(0.0)
    , ApTargetPitchCmd(0.0)
    , ApTargetYawCmd(0.0)
    , GuiParam0(0.0)
    , GuiParam1(0.0)
    , GuiParam2(0.0)
    , GuiParam3(0.0)
    , GuiParam4(0.0)
    , GuiParam5(0.0)
    , GuiParam6(0.0)
    , GuiParam7(0.0)
    , GuiParam8(0.0)  {
  (void)_alloc;
    }



   typedef float _foreaft_type;
  _foreaft_type foreaft;

   typedef float _leftright_type;
  _leftright_type leftright;

   typedef float _yaw_type;
  _yaw_type yaw;

   typedef float _roll_type;
  _roll_type roll;

   typedef float _pitch_type;
  _pitch_type pitch;

   typedef float _heave_type;
  _heave_type heave;

   typedef float _speed_type;
  _speed_type speed;

   typedef float _visYawCmd_type;
  _visYawCmd_type visYawCmd;

   typedef float _visPitchCmd_type;
  _visPitchCmd_type visPitchCmd;

   typedef float _visSpeedCmd_type;
  _visSpeedCmd_type visSpeedCmd;

   typedef uint8_t _isSpeedValid_type;
  _isSpeedValid_type isSpeedValid;

   typedef int32_t _gaitID_type;
  _gaitID_type gaitID;

   typedef int32_t _commandWord_type;
  _commandWord_type commandWord;

   typedef float _PitchTrim_type;
  _PitchTrim_type PitchTrim;

   typedef float _RollTrim_type;
  _RollTrim_type RollTrim;

   typedef float _YawTrim_type;
  _YawTrim_type YawTrim;

   typedef float _YawGyroDrift_type;
  _YawGyroDrift_type YawGyroDrift;

   typedef int32_t _gaitselect_type;
  _gaitselect_type gaitselect;

   typedef int32_t _enableIntegration_type;
  _enableIntegration_type enableIntegration;

   typedef int32_t _visEnable_type;
  _visEnable_type visEnable;

   typedef int32_t _setLEDs_type;
  _setLEDs_type setLEDs;

   typedef int32_t _AutopilotSelect_type;
  _AutopilotSelect_type AutopilotSelect;

   typedef int32_t _AutopilotMode_type;
  _AutopilotMode_type AutopilotMode;

   typedef int32_t _update_type;
  _update_type update;

   typedef int32_t _modePause_type;
  _modePause_type modePause;

   typedef int32_t _zeroDepth_type;
  _zeroDepth_type zeroDepth;

   typedef int32_t _SetGyro_type;
  _SetGyro_type SetGyro;

   typedef float _SetGyroValue_type;
  _SetGyroValue_type SetGyroValue;

   typedef float _period_type;
  _period_type period;

   typedef float _oscRatio_type;
  _oscRatio_type oscRatio;

   typedef float _amplitude_type;
  _amplitude_type amplitude;

   typedef float _iir_type;
  _iir_type iir;

   typedef float _visYawGain_type;
  _visYawGain_type visYawGain;

   typedef float _visPitchGain_type;
  _visPitchGain_type visPitchGain;

   typedef float _visSpeedGain_type;
  _visSpeedGain_type visSpeedGain;

   typedef float _actuatorOffset_type;
  _actuatorOffset_type actuatorOffset;

   typedef float _GuiTargetDepth_type;
  _GuiTargetDepth_type GuiTargetDepth;

   typedef float _ApTargetRollCmd_type;
  _ApTargetRollCmd_type ApTargetRollCmd;

   typedef float _ApTargetPitchCmd_type;
  _ApTargetPitchCmd_type ApTargetPitchCmd;

   typedef float _ApTargetYawCmd_type;
  _ApTargetYawCmd_type ApTargetYawCmd;

   typedef float _GuiParam0_type;
  _GuiParam0_type GuiParam0;

   typedef float _GuiParam1_type;
  _GuiParam1_type GuiParam1;

   typedef float _GuiParam2_type;
  _GuiParam2_type GuiParam2;

   typedef float _GuiParam3_type;
  _GuiParam3_type GuiParam3;

   typedef float _GuiParam4_type;
  _GuiParam4_type GuiParam4;

   typedef float _GuiParam5_type;
  _GuiParam5_type GuiParam5;

   typedef float _GuiParam6_type;
  _GuiParam6_type GuiParam6;

   typedef float _GuiParam7_type;
  _GuiParam7_type GuiParam7;

   typedef float _GuiParam8_type;
  _GuiParam8_type GuiParam8;




  typedef boost::shared_ptr< ::aquacore::DumpAllVarsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aquacore::DumpAllVarsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DumpAllVarsResponse_

typedef ::aquacore::DumpAllVarsResponse_<std::allocator<void> > DumpAllVarsResponse;

typedef boost::shared_ptr< ::aquacore::DumpAllVarsResponse > DumpAllVarsResponsePtr;
typedef boost::shared_ptr< ::aquacore::DumpAllVarsResponse const> DumpAllVarsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::aquacore::DumpAllVarsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::aquacore::DumpAllVarsResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::aquacore::DumpAllVarsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aquacore::DumpAllVarsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aquacore::DumpAllVarsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aquacore::DumpAllVarsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aquacore::DumpAllVarsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aquacore::DumpAllVarsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::aquacore::DumpAllVarsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fde576d15cca1da7597e8c96378fef78";
  }

  static const char* value(const ::aquacore::DumpAllVarsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfde576d15cca1da7ULL;
  static const uint64_t static_value2 = 0x597e8c96378fef78ULL;
};

template<class ContainerAllocator>
struct DataType< ::aquacore::DumpAllVarsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aquacore/DumpAllVarsResponse";
  }

  static const char* value(const ::aquacore::DumpAllVarsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::aquacore::DumpAllVarsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 foreaft\n\
float32 leftright\n\
float32 yaw\n\
float32 roll\n\
float32 pitch\n\
float32 heave\n\
float32 speed\n\
float32 visYawCmd\n\
float32 visPitchCmd\n\
float32 visSpeedCmd\n\
bool isSpeedValid\n\
int32 gaitID\n\
int32 commandWord\n\
float32 PitchTrim\n\
float32 RollTrim\n\
float32 YawTrim\n\
float32 YawGyroDrift\n\
int32 gaitselect\n\
int32 enableIntegration\n\
int32 visEnable\n\
int32 setLEDs\n\
int32 AutopilotSelect\n\
int32 AutopilotMode\n\
int32 update\n\
int32 modePause\n\
int32 zeroDepth\n\
int32 SetGyro\n\
float32 SetGyroValue\n\
\n\
\n\
float32 period\n\
float32 oscRatio\n\
float32 amplitude\n\
float32 iir\n\
float32 visYawGain\n\
float32 visPitchGain\n\
float32 visSpeedGain\n\
float32 actuatorOffset\n\
float32 GuiTargetDepth\n\
float32 ApTargetRollCmd\n\
float32 ApTargetPitchCmd\n\
float32 ApTargetYawCmd\n\
float32 GuiParam0\n\
float32 GuiParam1\n\
float32 GuiParam2\n\
float32 GuiParam3\n\
float32 GuiParam4\n\
float32 GuiParam5\n\
float32 GuiParam6\n\
float32 GuiParam7\n\
float32 GuiParam8\n\
";
  }

  static const char* value(const ::aquacore::DumpAllVarsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::aquacore::DumpAllVarsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.foreaft);
      stream.next(m.leftright);
      stream.next(m.yaw);
      stream.next(m.roll);
      stream.next(m.pitch);
      stream.next(m.heave);
      stream.next(m.speed);
      stream.next(m.visYawCmd);
      stream.next(m.visPitchCmd);
      stream.next(m.visSpeedCmd);
      stream.next(m.isSpeedValid);
      stream.next(m.gaitID);
      stream.next(m.commandWord);
      stream.next(m.PitchTrim);
      stream.next(m.RollTrim);
      stream.next(m.YawTrim);
      stream.next(m.YawGyroDrift);
      stream.next(m.gaitselect);
      stream.next(m.enableIntegration);
      stream.next(m.visEnable);
      stream.next(m.setLEDs);
      stream.next(m.AutopilotSelect);
      stream.next(m.AutopilotMode);
      stream.next(m.update);
      stream.next(m.modePause);
      stream.next(m.zeroDepth);
      stream.next(m.SetGyro);
      stream.next(m.SetGyroValue);
      stream.next(m.period);
      stream.next(m.oscRatio);
      stream.next(m.amplitude);
      stream.next(m.iir);
      stream.next(m.visYawGain);
      stream.next(m.visPitchGain);
      stream.next(m.visSpeedGain);
      stream.next(m.actuatorOffset);
      stream.next(m.GuiTargetDepth);
      stream.next(m.ApTargetRollCmd);
      stream.next(m.ApTargetPitchCmd);
      stream.next(m.ApTargetYawCmd);
      stream.next(m.GuiParam0);
      stream.next(m.GuiParam1);
      stream.next(m.GuiParam2);
      stream.next(m.GuiParam3);
      stream.next(m.GuiParam4);
      stream.next(m.GuiParam5);
      stream.next(m.GuiParam6);
      stream.next(m.GuiParam7);
      stream.next(m.GuiParam8);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DumpAllVarsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aquacore::DumpAllVarsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::aquacore::DumpAllVarsResponse_<ContainerAllocator>& v)
  {
    s << indent << "foreaft: ";
    Printer<float>::stream(s, indent + "  ", v.foreaft);
    s << indent << "leftright: ";
    Printer<float>::stream(s, indent + "  ", v.leftright);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "heave: ";
    Printer<float>::stream(s, indent + "  ", v.heave);
    s << indent << "speed: ";
    Printer<float>::stream(s, indent + "  ", v.speed);
    s << indent << "visYawCmd: ";
    Printer<float>::stream(s, indent + "  ", v.visYawCmd);
    s << indent << "visPitchCmd: ";
    Printer<float>::stream(s, indent + "  ", v.visPitchCmd);
    s << indent << "visSpeedCmd: ";
    Printer<float>::stream(s, indent + "  ", v.visSpeedCmd);
    s << indent << "isSpeedValid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isSpeedValid);
    s << indent << "gaitID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.gaitID);
    s << indent << "commandWord: ";
    Printer<int32_t>::stream(s, indent + "  ", v.commandWord);
    s << indent << "PitchTrim: ";
    Printer<float>::stream(s, indent + "  ", v.PitchTrim);
    s << indent << "RollTrim: ";
    Printer<float>::stream(s, indent + "  ", v.RollTrim);
    s << indent << "YawTrim: ";
    Printer<float>::stream(s, indent + "  ", v.YawTrim);
    s << indent << "YawGyroDrift: ";
    Printer<float>::stream(s, indent + "  ", v.YawGyroDrift);
    s << indent << "gaitselect: ";
    Printer<int32_t>::stream(s, indent + "  ", v.gaitselect);
    s << indent << "enableIntegration: ";
    Printer<int32_t>::stream(s, indent + "  ", v.enableIntegration);
    s << indent << "visEnable: ";
    Printer<int32_t>::stream(s, indent + "  ", v.visEnable);
    s << indent << "setLEDs: ";
    Printer<int32_t>::stream(s, indent + "  ", v.setLEDs);
    s << indent << "AutopilotSelect: ";
    Printer<int32_t>::stream(s, indent + "  ", v.AutopilotSelect);
    s << indent << "AutopilotMode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.AutopilotMode);
    s << indent << "update: ";
    Printer<int32_t>::stream(s, indent + "  ", v.update);
    s << indent << "modePause: ";
    Printer<int32_t>::stream(s, indent + "  ", v.modePause);
    s << indent << "zeroDepth: ";
    Printer<int32_t>::stream(s, indent + "  ", v.zeroDepth);
    s << indent << "SetGyro: ";
    Printer<int32_t>::stream(s, indent + "  ", v.SetGyro);
    s << indent << "SetGyroValue: ";
    Printer<float>::stream(s, indent + "  ", v.SetGyroValue);
    s << indent << "period: ";
    Printer<float>::stream(s, indent + "  ", v.period);
    s << indent << "oscRatio: ";
    Printer<float>::stream(s, indent + "  ", v.oscRatio);
    s << indent << "amplitude: ";
    Printer<float>::stream(s, indent + "  ", v.amplitude);
    s << indent << "iir: ";
    Printer<float>::stream(s, indent + "  ", v.iir);
    s << indent << "visYawGain: ";
    Printer<float>::stream(s, indent + "  ", v.visYawGain);
    s << indent << "visPitchGain: ";
    Printer<float>::stream(s, indent + "  ", v.visPitchGain);
    s << indent << "visSpeedGain: ";
    Printer<float>::stream(s, indent + "  ", v.visSpeedGain);
    s << indent << "actuatorOffset: ";
    Printer<float>::stream(s, indent + "  ", v.actuatorOffset);
    s << indent << "GuiTargetDepth: ";
    Printer<float>::stream(s, indent + "  ", v.GuiTargetDepth);
    s << indent << "ApTargetRollCmd: ";
    Printer<float>::stream(s, indent + "  ", v.ApTargetRollCmd);
    s << indent << "ApTargetPitchCmd: ";
    Printer<float>::stream(s, indent + "  ", v.ApTargetPitchCmd);
    s << indent << "ApTargetYawCmd: ";
    Printer<float>::stream(s, indent + "  ", v.ApTargetYawCmd);
    s << indent << "GuiParam0: ";
    Printer<float>::stream(s, indent + "  ", v.GuiParam0);
    s << indent << "GuiParam1: ";
    Printer<float>::stream(s, indent + "  ", v.GuiParam1);
    s << indent << "GuiParam2: ";
    Printer<float>::stream(s, indent + "  ", v.GuiParam2);
    s << indent << "GuiParam3: ";
    Printer<float>::stream(s, indent + "  ", v.GuiParam3);
    s << indent << "GuiParam4: ";
    Printer<float>::stream(s, indent + "  ", v.GuiParam4);
    s << indent << "GuiParam5: ";
    Printer<float>::stream(s, indent + "  ", v.GuiParam5);
    s << indent << "GuiParam6: ";
    Printer<float>::stream(s, indent + "  ", v.GuiParam6);
    s << indent << "GuiParam7: ";
    Printer<float>::stream(s, indent + "  ", v.GuiParam7);
    s << indent << "GuiParam8: ";
    Printer<float>::stream(s, indent + "  ", v.GuiParam8);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AQUACORE_MESSAGE_DUMPALLVARSRESPONSE_H
