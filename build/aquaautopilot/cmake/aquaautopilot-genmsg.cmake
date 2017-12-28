# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "aquaautopilot: 1 messages, 0 services")

set(MSG_I_FLAGS "-Iaquaautopilot:/home/ran/Documents/Assignment1/src/aquaautopilot/msg;-Igeometry_msgs:/opt/ros/kinetic/share/geometry_msgs/cmake/../msg;-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(aquaautopilot_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/ran/Documents/Assignment1/src/aquaautopilot/msg/UberpilotStatus.msg" NAME_WE)
add_custom_target(_aquaautopilot_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "aquaautopilot" "/home/ran/Documents/Assignment1/src/aquaautopilot/msg/UberpilotStatus.msg" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(aquaautopilot
  "/home/ran/Documents/Assignment1/src/aquaautopilot/msg/UberpilotStatus.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/aquaautopilot
)

### Generating Services

### Generating Module File
_generate_module_cpp(aquaautopilot
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/aquaautopilot
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(aquaautopilot_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(aquaautopilot_generate_messages aquaautopilot_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/ran/Documents/Assignment1/src/aquaautopilot/msg/UberpilotStatus.msg" NAME_WE)
add_dependencies(aquaautopilot_generate_messages_cpp _aquaautopilot_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(aquaautopilot_gencpp)
add_dependencies(aquaautopilot_gencpp aquaautopilot_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS aquaautopilot_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(aquaautopilot
  "/home/ran/Documents/Assignment1/src/aquaautopilot/msg/UberpilotStatus.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/aquaautopilot
)

### Generating Services

### Generating Module File
_generate_module_eus(aquaautopilot
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/aquaautopilot
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(aquaautopilot_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(aquaautopilot_generate_messages aquaautopilot_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/ran/Documents/Assignment1/src/aquaautopilot/msg/UberpilotStatus.msg" NAME_WE)
add_dependencies(aquaautopilot_generate_messages_eus _aquaautopilot_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(aquaautopilot_geneus)
add_dependencies(aquaautopilot_geneus aquaautopilot_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS aquaautopilot_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(aquaautopilot
  "/home/ran/Documents/Assignment1/src/aquaautopilot/msg/UberpilotStatus.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/aquaautopilot
)

### Generating Services

### Generating Module File
_generate_module_lisp(aquaautopilot
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/aquaautopilot
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(aquaautopilot_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(aquaautopilot_generate_messages aquaautopilot_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/ran/Documents/Assignment1/src/aquaautopilot/msg/UberpilotStatus.msg" NAME_WE)
add_dependencies(aquaautopilot_generate_messages_lisp _aquaautopilot_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(aquaautopilot_genlisp)
add_dependencies(aquaautopilot_genlisp aquaautopilot_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS aquaautopilot_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(aquaautopilot
  "/home/ran/Documents/Assignment1/src/aquaautopilot/msg/UberpilotStatus.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/aquaautopilot
)

### Generating Services

### Generating Module File
_generate_module_nodejs(aquaautopilot
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/aquaautopilot
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(aquaautopilot_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(aquaautopilot_generate_messages aquaautopilot_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/ran/Documents/Assignment1/src/aquaautopilot/msg/UberpilotStatus.msg" NAME_WE)
add_dependencies(aquaautopilot_generate_messages_nodejs _aquaautopilot_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(aquaautopilot_gennodejs)
add_dependencies(aquaautopilot_gennodejs aquaautopilot_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS aquaautopilot_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(aquaautopilot
  "/home/ran/Documents/Assignment1/src/aquaautopilot/msg/UberpilotStatus.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/aquaautopilot
)

### Generating Services

### Generating Module File
_generate_module_py(aquaautopilot
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/aquaautopilot
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(aquaautopilot_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(aquaautopilot_generate_messages aquaautopilot_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/ran/Documents/Assignment1/src/aquaautopilot/msg/UberpilotStatus.msg" NAME_WE)
add_dependencies(aquaautopilot_generate_messages_py _aquaautopilot_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(aquaautopilot_genpy)
add_dependencies(aquaautopilot_genpy aquaautopilot_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS aquaautopilot_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/aquaautopilot)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/aquaautopilot
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(aquaautopilot_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/aquaautopilot)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/aquaautopilot
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(aquaautopilot_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/aquaautopilot)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/aquaautopilot
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(aquaautopilot_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/aquaautopilot)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/aquaautopilot
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(aquaautopilot_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/aquaautopilot)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/aquaautopilot\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/aquaautopilot
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(aquaautopilot_generate_messages_py geometry_msgs_generate_messages_py)
endif()
