# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/agar/BitTorrent

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/agar/BitTorrent/build

# Include any dependencies generated for this target.
include daemon/CMakeFiles/BT_daemon.dir/depend.make

# Include the progress variables for this target.
include daemon/CMakeFiles/BT_daemon.dir/progress.make

# Include the compile flags for this target's objects.
include daemon/CMakeFiles/BT_daemon.dir/flags.make

daemon/CMakeFiles/BT_daemon.dir/src/daemon.cpp.o: daemon/CMakeFiles/BT_daemon.dir/flags.make
daemon/CMakeFiles/BT_daemon.dir/src/daemon.cpp.o: ../daemon/src/daemon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agar/BitTorrent/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object daemon/CMakeFiles/BT_daemon.dir/src/daemon.cpp.o"
	cd /home/agar/BitTorrent/build/daemon && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BT_daemon.dir/src/daemon.cpp.o -c /home/agar/BitTorrent/daemon/src/daemon.cpp

daemon/CMakeFiles/BT_daemon.dir/src/daemon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BT_daemon.dir/src/daemon.cpp.i"
	cd /home/agar/BitTorrent/build/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agar/BitTorrent/daemon/src/daemon.cpp > CMakeFiles/BT_daemon.dir/src/daemon.cpp.i

daemon/CMakeFiles/BT_daemon.dir/src/daemon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BT_daemon.dir/src/daemon.cpp.s"
	cd /home/agar/BitTorrent/build/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agar/BitTorrent/daemon/src/daemon.cpp -o CMakeFiles/BT_daemon.dir/src/daemon.cpp.s

daemon/CMakeFiles/BT_daemon.dir/src/dserver.cpp.o: daemon/CMakeFiles/BT_daemon.dir/flags.make
daemon/CMakeFiles/BT_daemon.dir/src/dserver.cpp.o: ../daemon/src/dserver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agar/BitTorrent/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object daemon/CMakeFiles/BT_daemon.dir/src/dserver.cpp.o"
	cd /home/agar/BitTorrent/build/daemon && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BT_daemon.dir/src/dserver.cpp.o -c /home/agar/BitTorrent/daemon/src/dserver.cpp

daemon/CMakeFiles/BT_daemon.dir/src/dserver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BT_daemon.dir/src/dserver.cpp.i"
	cd /home/agar/BitTorrent/build/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agar/BitTorrent/daemon/src/dserver.cpp > CMakeFiles/BT_daemon.dir/src/dserver.cpp.i

daemon/CMakeFiles/BT_daemon.dir/src/dserver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BT_daemon.dir/src/dserver.cpp.s"
	cd /home/agar/BitTorrent/build/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agar/BitTorrent/daemon/src/dserver.cpp -o CMakeFiles/BT_daemon.dir/src/dserver.cpp.s

daemon/CMakeFiles/BT_daemon.dir/src/main.cpp.o: daemon/CMakeFiles/BT_daemon.dir/flags.make
daemon/CMakeFiles/BT_daemon.dir/src/main.cpp.o: ../daemon/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agar/BitTorrent/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object daemon/CMakeFiles/BT_daemon.dir/src/main.cpp.o"
	cd /home/agar/BitTorrent/build/daemon && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BT_daemon.dir/src/main.cpp.o -c /home/agar/BitTorrent/daemon/src/main.cpp

daemon/CMakeFiles/BT_daemon.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BT_daemon.dir/src/main.cpp.i"
	cd /home/agar/BitTorrent/build/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agar/BitTorrent/daemon/src/main.cpp > CMakeFiles/BT_daemon.dir/src/main.cpp.i

daemon/CMakeFiles/BT_daemon.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BT_daemon.dir/src/main.cpp.s"
	cd /home/agar/BitTorrent/build/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agar/BitTorrent/daemon/src/main.cpp -o CMakeFiles/BT_daemon.dir/src/main.cpp.s

# Object files for target BT_daemon
BT_daemon_OBJECTS = \
"CMakeFiles/BT_daemon.dir/src/daemon.cpp.o" \
"CMakeFiles/BT_daemon.dir/src/dserver.cpp.o" \
"CMakeFiles/BT_daemon.dir/src/main.cpp.o"

# External object files for target BT_daemon
BT_daemon_EXTERNAL_OBJECTS =

daemon/BT_daemon: daemon/CMakeFiles/BT_daemon.dir/src/daemon.cpp.o
daemon/BT_daemon: daemon/CMakeFiles/BT_daemon.dir/src/dserver.cpp.o
daemon/BT_daemon: daemon/CMakeFiles/BT_daemon.dir/src/main.cpp.o
daemon/BT_daemon: daemon/CMakeFiles/BT_daemon.dir/build.make
daemon/BT_daemon: daemon/CMakeFiles/BT_daemon.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/agar/BitTorrent/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable BT_daemon"
	cd /home/agar/BitTorrent/build/daemon && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BT_daemon.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
daemon/CMakeFiles/BT_daemon.dir/build: daemon/BT_daemon

.PHONY : daemon/CMakeFiles/BT_daemon.dir/build

daemon/CMakeFiles/BT_daemon.dir/clean:
	cd /home/agar/BitTorrent/build/daemon && $(CMAKE_COMMAND) -P CMakeFiles/BT_daemon.dir/cmake_clean.cmake
.PHONY : daemon/CMakeFiles/BT_daemon.dir/clean

daemon/CMakeFiles/BT_daemon.dir/depend:
	cd /home/agar/BitTorrent/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/agar/BitTorrent /home/agar/BitTorrent/daemon /home/agar/BitTorrent/build /home/agar/BitTorrent/build/daemon /home/agar/BitTorrent/build/daemon/CMakeFiles/BT_daemon.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : daemon/CMakeFiles/BT_daemon.dir/depend

