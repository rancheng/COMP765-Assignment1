# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ran/Documents/Assignment1/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ran/Documents/Assignment1/build

# Include any dependencies generated for this target.
include aqua_gait/CMakeFiles/test_gaits_gui.dir/depend.make

# Include the progress variables for this target.
include aqua_gait/CMakeFiles/test_gaits_gui.dir/progress.make

# Include the compile flags for this target's objects.
include aqua_gait/CMakeFiles/test_gaits_gui.dir/flags.make

aqua_gait/include/aqua_gait/moc_QTestGaitsGUI.cpp: /home/ran/Documents/Assignment1/src/aqua_gait/include/aqua_gait/QTestGaitsGUI.hpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ran/Documents/Assignment1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating include/aqua_gait/moc_QTestGaitsGUI.cpp"
	cd /home/ran/Documents/Assignment1/build/aqua_gait/include/aqua_gait && /usr/lib/x86_64-linux-gnu/qt5/bin/moc @/home/ran/Documents/Assignment1/build/aqua_gait/include/aqua_gait/moc_QTestGaitsGUI.cpp_parameters

aqua_gait/CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.o: aqua_gait/CMakeFiles/test_gaits_gui.dir/flags.make
aqua_gait/CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.o: /home/ran/Documents/Assignment1/src/aqua_gait/src/test_gaits_gui.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ran/Documents/Assignment1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object aqua_gait/CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.o"
	cd /home/ran/Documents/Assignment1/build/aqua_gait && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.o -c /home/ran/Documents/Assignment1/src/aqua_gait/src/test_gaits_gui.cpp

aqua_gait/CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.i"
	cd /home/ran/Documents/Assignment1/build/aqua_gait && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ran/Documents/Assignment1/src/aqua_gait/src/test_gaits_gui.cpp > CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.i

aqua_gait/CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.s"
	cd /home/ran/Documents/Assignment1/build/aqua_gait && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ran/Documents/Assignment1/src/aqua_gait/src/test_gaits_gui.cpp -o CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.s

aqua_gait/CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.o.requires:

.PHONY : aqua_gait/CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.o.requires

aqua_gait/CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.o.provides: aqua_gait/CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.o.requires
	$(MAKE) -f aqua_gait/CMakeFiles/test_gaits_gui.dir/build.make aqua_gait/CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.o.provides.build
.PHONY : aqua_gait/CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.o.provides

aqua_gait/CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.o.provides.build: aqua_gait/CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.o


aqua_gait/CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.o: aqua_gait/CMakeFiles/test_gaits_gui.dir/flags.make
aqua_gait/CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.o: aqua_gait/include/aqua_gait/moc_QTestGaitsGUI.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ran/Documents/Assignment1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object aqua_gait/CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.o"
	cd /home/ran/Documents/Assignment1/build/aqua_gait && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.o -c /home/ran/Documents/Assignment1/build/aqua_gait/include/aqua_gait/moc_QTestGaitsGUI.cpp

aqua_gait/CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.i"
	cd /home/ran/Documents/Assignment1/build/aqua_gait && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ran/Documents/Assignment1/build/aqua_gait/include/aqua_gait/moc_QTestGaitsGUI.cpp > CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.i

aqua_gait/CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.s"
	cd /home/ran/Documents/Assignment1/build/aqua_gait && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ran/Documents/Assignment1/build/aqua_gait/include/aqua_gait/moc_QTestGaitsGUI.cpp -o CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.s

aqua_gait/CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.o.requires:

.PHONY : aqua_gait/CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.o.requires

aqua_gait/CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.o.provides: aqua_gait/CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.o.requires
	$(MAKE) -f aqua_gait/CMakeFiles/test_gaits_gui.dir/build.make aqua_gait/CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.o.provides.build
.PHONY : aqua_gait/CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.o.provides

aqua_gait/CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.o.provides.build: aqua_gait/CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.o


# Object files for target test_gaits_gui
test_gaits_gui_OBJECTS = \
"CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.o" \
"CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.o"

# External object files for target test_gaits_gui
test_gaits_gui_EXTERNAL_OBJECTS =

/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: aqua_gait/CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.o
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: aqua_gait/CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.o
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: aqua_gait/CMakeFiles/test_gaits_gui.dir/build.make
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /opt/ros/kinetic/lib/libactionlib.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /opt/ros/kinetic/lib/libroscpp.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /opt/ros/kinetic/lib/librosconsole.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /opt/ros/kinetic/lib/libxmlrpcpp.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /opt/ros/kinetic/lib/libroscpp_serialization.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /opt/ros/kinetic/lib/librostime.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /opt/ros/kinetic/lib/libcpp_common.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /home/ran/Documents/Assignment1/devel/lib/libaqua_gait.so
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.5.1
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.5.1
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.5.1
/home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui: aqua_gait/CMakeFiles/test_gaits_gui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ran/Documents/Assignment1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable /home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui"
	cd /home/ran/Documents/Assignment1/build/aqua_gait && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_gaits_gui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
aqua_gait/CMakeFiles/test_gaits_gui.dir/build: /home/ran/Documents/Assignment1/devel/lib/aqua_gait/test_gaits_gui

.PHONY : aqua_gait/CMakeFiles/test_gaits_gui.dir/build

aqua_gait/CMakeFiles/test_gaits_gui.dir/requires: aqua_gait/CMakeFiles/test_gaits_gui.dir/src/test_gaits_gui.cpp.o.requires
aqua_gait/CMakeFiles/test_gaits_gui.dir/requires: aqua_gait/CMakeFiles/test_gaits_gui.dir/include/aqua_gait/moc_QTestGaitsGUI.cpp.o.requires

.PHONY : aqua_gait/CMakeFiles/test_gaits_gui.dir/requires

aqua_gait/CMakeFiles/test_gaits_gui.dir/clean:
	cd /home/ran/Documents/Assignment1/build/aqua_gait && $(CMAKE_COMMAND) -P CMakeFiles/test_gaits_gui.dir/cmake_clean.cmake
.PHONY : aqua_gait/CMakeFiles/test_gaits_gui.dir/clean

aqua_gait/CMakeFiles/test_gaits_gui.dir/depend: aqua_gait/include/aqua_gait/moc_QTestGaitsGUI.cpp
	cd /home/ran/Documents/Assignment1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ran/Documents/Assignment1/src /home/ran/Documents/Assignment1/src/aqua_gait /home/ran/Documents/Assignment1/build /home/ran/Documents/Assignment1/build/aqua_gait /home/ran/Documents/Assignment1/build/aqua_gait/CMakeFiles/test_gaits_gui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : aqua_gait/CMakeFiles/test_gaits_gui.dir/depend

