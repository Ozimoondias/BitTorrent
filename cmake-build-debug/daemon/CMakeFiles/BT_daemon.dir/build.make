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
CMAKE_COMMAND = /var/lib/snapd/snap/clion/123/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /var/lib/snapd/snap/clion/123/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/agar/Project/BitTorrent

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/agar/Project/BitTorrent/cmake-build-debug

# Include any dependencies generated for this target.
include daemon/CMakeFiles/BT_daemon.dir/depend.make

# Include the progress variables for this target.
include daemon/CMakeFiles/BT_daemon.dir/progress.make

# Include the compile flags for this target's objects.
include daemon/CMakeFiles/BT_daemon.dir/flags.make

daemon/CMakeFiles/BT_daemon.dir/src/daemon.cpp.o: daemon/CMakeFiles/BT_daemon.dir/flags.make
daemon/CMakeFiles/BT_daemon.dir/src/daemon.cpp.o: ../daemon/src/daemon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agar/Project/BitTorrent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object daemon/CMakeFiles/BT_daemon.dir/src/daemon.cpp.o"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BT_daemon.dir/src/daemon.cpp.o -c /home/agar/Project/BitTorrent/daemon/src/daemon.cpp

daemon/CMakeFiles/BT_daemon.dir/src/daemon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BT_daemon.dir/src/daemon.cpp.i"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agar/Project/BitTorrent/daemon/src/daemon.cpp > CMakeFiles/BT_daemon.dir/src/daemon.cpp.i

daemon/CMakeFiles/BT_daemon.dir/src/daemon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BT_daemon.dir/src/daemon.cpp.s"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agar/Project/BitTorrent/daemon/src/daemon.cpp -o CMakeFiles/BT_daemon.dir/src/daemon.cpp.s

daemon/CMakeFiles/BT_daemon.dir/src/command/add.cpp.o: daemon/CMakeFiles/BT_daemon.dir/flags.make
daemon/CMakeFiles/BT_daemon.dir/src/command/add.cpp.o: ../daemon/src/command/add.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agar/Project/BitTorrent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object daemon/CMakeFiles/BT_daemon.dir/src/command/add.cpp.o"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BT_daemon.dir/src/command/add.cpp.o -c /home/agar/Project/BitTorrent/daemon/src/command/add.cpp

daemon/CMakeFiles/BT_daemon.dir/src/command/add.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BT_daemon.dir/src/command/add.cpp.i"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agar/Project/BitTorrent/daemon/src/command/add.cpp > CMakeFiles/BT_daemon.dir/src/command/add.cpp.i

daemon/CMakeFiles/BT_daemon.dir/src/command/add.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BT_daemon.dir/src/command/add.cpp.s"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agar/Project/BitTorrent/daemon/src/command/add.cpp -o CMakeFiles/BT_daemon.dir/src/command/add.cpp.s

daemon/CMakeFiles/BT_daemon.dir/src/command/del.cpp.o: daemon/CMakeFiles/BT_daemon.dir/flags.make
daemon/CMakeFiles/BT_daemon.dir/src/command/del.cpp.o: ../daemon/src/command/del.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agar/Project/BitTorrent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object daemon/CMakeFiles/BT_daemon.dir/src/command/del.cpp.o"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BT_daemon.dir/src/command/del.cpp.o -c /home/agar/Project/BitTorrent/daemon/src/command/del.cpp

daemon/CMakeFiles/BT_daemon.dir/src/command/del.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BT_daemon.dir/src/command/del.cpp.i"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agar/Project/BitTorrent/daemon/src/command/del.cpp > CMakeFiles/BT_daemon.dir/src/command/del.cpp.i

daemon/CMakeFiles/BT_daemon.dir/src/command/del.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BT_daemon.dir/src/command/del.cpp.s"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agar/Project/BitTorrent/daemon/src/command/del.cpp -o CMakeFiles/BT_daemon.dir/src/command/del.cpp.s

daemon/CMakeFiles/BT_daemon.dir/src/command/info.cpp.o: daemon/CMakeFiles/BT_daemon.dir/flags.make
daemon/CMakeFiles/BT_daemon.dir/src/command/info.cpp.o: ../daemon/src/command/info.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agar/Project/BitTorrent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object daemon/CMakeFiles/BT_daemon.dir/src/command/info.cpp.o"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BT_daemon.dir/src/command/info.cpp.o -c /home/agar/Project/BitTorrent/daemon/src/command/info.cpp

daemon/CMakeFiles/BT_daemon.dir/src/command/info.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BT_daemon.dir/src/command/info.cpp.i"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agar/Project/BitTorrent/daemon/src/command/info.cpp > CMakeFiles/BT_daemon.dir/src/command/info.cpp.i

daemon/CMakeFiles/BT_daemon.dir/src/command/info.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BT_daemon.dir/src/command/info.cpp.s"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agar/Project/BitTorrent/daemon/src/command/info.cpp -o CMakeFiles/BT_daemon.dir/src/command/info.cpp.s

daemon/CMakeFiles/BT_daemon.dir/src/command/pause.cpp.o: daemon/CMakeFiles/BT_daemon.dir/flags.make
daemon/CMakeFiles/BT_daemon.dir/src/command/pause.cpp.o: ../daemon/src/command/pause.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agar/Project/BitTorrent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object daemon/CMakeFiles/BT_daemon.dir/src/command/pause.cpp.o"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BT_daemon.dir/src/command/pause.cpp.o -c /home/agar/Project/BitTorrent/daemon/src/command/pause.cpp

daemon/CMakeFiles/BT_daemon.dir/src/command/pause.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BT_daemon.dir/src/command/pause.cpp.i"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agar/Project/BitTorrent/daemon/src/command/pause.cpp > CMakeFiles/BT_daemon.dir/src/command/pause.cpp.i

daemon/CMakeFiles/BT_daemon.dir/src/command/pause.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BT_daemon.dir/src/command/pause.cpp.s"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agar/Project/BitTorrent/daemon/src/command/pause.cpp -o CMakeFiles/BT_daemon.dir/src/command/pause.cpp.s

daemon/CMakeFiles/BT_daemon.dir/src/command/resume.cpp.o: daemon/CMakeFiles/BT_daemon.dir/flags.make
daemon/CMakeFiles/BT_daemon.dir/src/command/resume.cpp.o: ../daemon/src/command/resume.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agar/Project/BitTorrent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object daemon/CMakeFiles/BT_daemon.dir/src/command/resume.cpp.o"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BT_daemon.dir/src/command/resume.cpp.o -c /home/agar/Project/BitTorrent/daemon/src/command/resume.cpp

daemon/CMakeFiles/BT_daemon.dir/src/command/resume.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BT_daemon.dir/src/command/resume.cpp.i"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agar/Project/BitTorrent/daemon/src/command/resume.cpp > CMakeFiles/BT_daemon.dir/src/command/resume.cpp.i

daemon/CMakeFiles/BT_daemon.dir/src/command/resume.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BT_daemon.dir/src/command/resume.cpp.s"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agar/Project/BitTorrent/daemon/src/command/resume.cpp -o CMakeFiles/BT_daemon.dir/src/command/resume.cpp.s

daemon/CMakeFiles/BT_daemon.dir/src/daemonserver.cpp.o: daemon/CMakeFiles/BT_daemon.dir/flags.make
daemon/CMakeFiles/BT_daemon.dir/src/daemonserver.cpp.o: ../daemon/src/daemonserver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agar/Project/BitTorrent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object daemon/CMakeFiles/BT_daemon.dir/src/daemonserver.cpp.o"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BT_daemon.dir/src/daemonserver.cpp.o -c /home/agar/Project/BitTorrent/daemon/src/daemonserver.cpp

daemon/CMakeFiles/BT_daemon.dir/src/daemonserver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BT_daemon.dir/src/daemonserver.cpp.i"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agar/Project/BitTorrent/daemon/src/daemonserver.cpp > CMakeFiles/BT_daemon.dir/src/daemonserver.cpp.i

daemon/CMakeFiles/BT_daemon.dir/src/daemonserver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BT_daemon.dir/src/daemonserver.cpp.s"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agar/Project/BitTorrent/daemon/src/daemonserver.cpp -o CMakeFiles/BT_daemon.dir/src/daemonserver.cpp.s

daemon/CMakeFiles/BT_daemon.dir/src/main.cpp.o: daemon/CMakeFiles/BT_daemon.dir/flags.make
daemon/CMakeFiles/BT_daemon.dir/src/main.cpp.o: ../daemon/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agar/Project/BitTorrent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object daemon/CMakeFiles/BT_daemon.dir/src/main.cpp.o"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BT_daemon.dir/src/main.cpp.o -c /home/agar/Project/BitTorrent/daemon/src/main.cpp

daemon/CMakeFiles/BT_daemon.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BT_daemon.dir/src/main.cpp.i"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agar/Project/BitTorrent/daemon/src/main.cpp > CMakeFiles/BT_daemon.dir/src/main.cpp.i

daemon/CMakeFiles/BT_daemon.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BT_daemon.dir/src/main.cpp.s"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agar/Project/BitTorrent/daemon/src/main.cpp -o CMakeFiles/BT_daemon.dir/src/main.cpp.s

# Object files for target BT_daemon
BT_daemon_OBJECTS = \
"CMakeFiles/BT_daemon.dir/src/daemon.cpp.o" \
"CMakeFiles/BT_daemon.dir/src/command/add.cpp.o" \
"CMakeFiles/BT_daemon.dir/src/command/del.cpp.o" \
"CMakeFiles/BT_daemon.dir/src/command/info.cpp.o" \
"CMakeFiles/BT_daemon.dir/src/command/pause.cpp.o" \
"CMakeFiles/BT_daemon.dir/src/command/resume.cpp.o" \
"CMakeFiles/BT_daemon.dir/src/daemonserver.cpp.o" \
"CMakeFiles/BT_daemon.dir/src/main.cpp.o"

# External object files for target BT_daemon
BT_daemon_EXTERNAL_OBJECTS =

daemon/BT_daemon: daemon/CMakeFiles/BT_daemon.dir/src/daemon.cpp.o
daemon/BT_daemon: daemon/CMakeFiles/BT_daemon.dir/src/command/add.cpp.o
daemon/BT_daemon: daemon/CMakeFiles/BT_daemon.dir/src/command/del.cpp.o
daemon/BT_daemon: daemon/CMakeFiles/BT_daemon.dir/src/command/info.cpp.o
daemon/BT_daemon: daemon/CMakeFiles/BT_daemon.dir/src/command/pause.cpp.o
daemon/BT_daemon: daemon/CMakeFiles/BT_daemon.dir/src/command/resume.cpp.o
daemon/BT_daemon: daemon/CMakeFiles/BT_daemon.dir/src/daemonserver.cpp.o
daemon/BT_daemon: daemon/CMakeFiles/BT_daemon.dir/src/main.cpp.o
daemon/BT_daemon: daemon/CMakeFiles/BT_daemon.dir/build.make
daemon/BT_daemon: daemon/CMakeFiles/BT_daemon.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/agar/Project/BitTorrent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable BT_daemon"
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BT_daemon.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
daemon/CMakeFiles/BT_daemon.dir/build: daemon/BT_daemon

.PHONY : daemon/CMakeFiles/BT_daemon.dir/build

daemon/CMakeFiles/BT_daemon.dir/clean:
	cd /home/agar/Project/BitTorrent/cmake-build-debug/daemon && $(CMAKE_COMMAND) -P CMakeFiles/BT_daemon.dir/cmake_clean.cmake
.PHONY : daemon/CMakeFiles/BT_daemon.dir/clean

daemon/CMakeFiles/BT_daemon.dir/depend:
	cd /home/agar/Project/BitTorrent/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/agar/Project/BitTorrent /home/agar/Project/BitTorrent/daemon /home/agar/Project/BitTorrent/cmake-build-debug /home/agar/Project/BitTorrent/cmake-build-debug/daemon /home/agar/Project/BitTorrent/cmake-build-debug/daemon/CMakeFiles/BT_daemon.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : daemon/CMakeFiles/BT_daemon.dir/depend

