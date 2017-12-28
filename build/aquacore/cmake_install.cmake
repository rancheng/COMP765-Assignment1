# Install script for directory: /home/ran/Documents/Assignment1/src/aquacore

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ran/Documents/Assignment1/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aquacore/msg" TYPE FILE FILES
    "/home/ran/Documents/Assignment1/src/aquacore/msg/AutopilotModes.msg"
    "/home/ran/Documents/Assignment1/src/aquacore/msg/Command.msg"
    "/home/ran/Documents/Assignment1/src/aquacore/msg/cuROSTityScore.msg"
    "/home/ran/Documents/Assignment1/src/aquacore/msg/GPSFixList.msg"
    "/home/ran/Documents/Assignment1/src/aquacore/msg/Health.msg"
    "/home/ran/Documents/Assignment1/src/aquacore/msg/KeepAlive.msg"
    "/home/ran/Documents/Assignment1/src/aquacore/msg/StateMsg.msg"
    "/home/ran/Documents/Assignment1/src/aquacore/msg/SurfaceTaskTypes.msg"
    "/home/ran/Documents/Assignment1/src/aquacore/msg/Velocity.msg"
    "/home/ran/Documents/Assignment1/src/aquacore/msg/PeriodicLegCommand.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aquacore/srv" TYPE FILE FILES
    "/home/ran/Documents/Assignment1/src/aquacore/srv/DumpAllVars.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/EmptyBool.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/EnableAutopilot.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/EnableDepthControl.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/GetAutopilotParams.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/GetAutopilotState.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/GetLegParams.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/GetNamedBool.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/GetNamedFloat.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/GetNamedInt.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/GetState.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/IsCalibrated.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/Menu.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/SetAutopilotMode.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/SetAutopilotParams.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/SetBool.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/SetDirection.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/SetGait.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/SetLegParams.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/SetNamedFloat.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/SetPauseMode.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/SetString.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/SetTargetAngles.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/SetTargetDepth.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/SetUpRegulatedSwimMode.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/GetPeriodicLegCommand.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/SetPeriodicLegCommand.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/SetTargetLegAngles.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/GetTargetLegAngles.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/StepSimulation.srv"
    "/home/ran/Documents/Assignment1/src/aquacore/srv/RunSimulationUntilTime.srv"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aquacore/action" TYPE FILE FILES
    "/home/ran/Documents/Assignment1/src/aquacore/action/ChangeDepth.action"
    "/home/ran/Documents/Assignment1/src/aquacore/action/DoSurfaceTask.action"
    "/home/ran/Documents/Assignment1/src/aquacore/action/Goto.action"
    "/home/ran/Documents/Assignment1/src/aquacore/action/SwimForward.action"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aquacore/msg" TYPE FILE FILES
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/ChangeDepthAction.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/ChangeDepthActionGoal.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/ChangeDepthActionResult.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/ChangeDepthActionFeedback.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/ChangeDepthGoal.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/ChangeDepthResult.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/ChangeDepthFeedback.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aquacore/msg" TYPE FILE FILES
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/DoSurfaceTaskAction.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/DoSurfaceTaskActionGoal.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/DoSurfaceTaskActionResult.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/DoSurfaceTaskActionFeedback.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/DoSurfaceTaskGoal.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/DoSurfaceTaskResult.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/DoSurfaceTaskFeedback.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aquacore/msg" TYPE FILE FILES
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/GotoAction.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/GotoActionGoal.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/GotoActionResult.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/GotoActionFeedback.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/GotoGoal.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/GotoResult.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/GotoFeedback.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aquacore/msg" TYPE FILE FILES
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/SwimForwardAction.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/SwimForwardActionGoal.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/SwimForwardActionResult.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/SwimForwardActionFeedback.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/SwimForwardGoal.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/SwimForwardResult.msg"
    "/home/ran/Documents/Assignment1/devel/share/aquacore/msg/SwimForwardFeedback.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aquacore/cmake" TYPE FILE FILES "/home/ran/Documents/Assignment1/build/aquacore/catkin_generated/installspace/aquacore-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/ran/Documents/Assignment1/devel/include/aquacore")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/ran/Documents/Assignment1/devel/share/roseus/ros/aquacore")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/ran/Documents/Assignment1/devel/share/common-lisp/ros/aquacore")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/ran/Documents/Assignment1/devel/share/gennodejs/ros/aquacore")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/ran/Documents/Assignment1/devel/lib/python2.7/dist-packages/aquacore")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/ran/Documents/Assignment1/devel/lib/python2.7/dist-packages/aquacore")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/ran/Documents/Assignment1/build/aquacore/catkin_generated/installspace/aquacore.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aquacore/cmake" TYPE FILE FILES "/home/ran/Documents/Assignment1/build/aquacore/catkin_generated/installspace/aquacore-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aquacore/cmake" TYPE FILE FILES
    "/home/ran/Documents/Assignment1/build/aquacore/catkin_generated/installspace/aquacoreConfig.cmake"
    "/home/ran/Documents/Assignment1/build/aquacore/catkin_generated/installspace/aquacoreConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aquacore" TYPE FILE FILES "/home/ran/Documents/Assignment1/src/aquacore/package.xml")
endif()

