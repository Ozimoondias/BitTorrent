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
CMAKE_COMMAND = /home/agar/Téléchargements/clion-2020.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/agar/Téléchargements/clion-2020.2/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/agar/BitTorrent

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/agar/BitTorrent/cmake-build-debug

# Include any dependencies generated for this target.
include cli/CMakeFiles/BT_cli.dir/depend.make

# Include the progress variables for this target.
include cli/CMakeFiles/BT_cli.dir/progress.make

# Include the compile flags for this target's objects.
include cli/CMakeFiles/BT_cli.dir/flags.make

cli/CMakeFiles/BT_cli.dir/src/cli.cpp.o: cli/CMakeFiles/BT_cli.dir/flags.make
cli/CMakeFiles/BT_cli.dir/src/cli.cpp.o: ../cli/src/cli.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agar/BitTorrent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object cli/CMakeFiles/BT_cli.dir/src/cli.cpp.o"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BT_cli.dir/src/cli.cpp.o -c /home/agar/BitTorrent/cli/src/cli.cpp

cli/CMakeFiles/BT_cli.dir/src/cli.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BT_cli.dir/src/cli.cpp.i"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agar/BitTorrent/cli/src/cli.cpp > CMakeFiles/BT_cli.dir/src/cli.cpp.i

cli/CMakeFiles/BT_cli.dir/src/cli.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BT_cli.dir/src/cli.cpp.s"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agar/BitTorrent/cli/src/cli.cpp -o CMakeFiles/BT_cli.dir/src/cli.cpp.s

cli/CMakeFiles/BT_cli.dir/src/command/add.cpp.o: cli/CMakeFiles/BT_cli.dir/flags.make
cli/CMakeFiles/BT_cli.dir/src/command/add.cpp.o: ../cli/src/command/add.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agar/BitTorrent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object cli/CMakeFiles/BT_cli.dir/src/command/add.cpp.o"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BT_cli.dir/src/command/add.cpp.o -c /home/agar/BitTorrent/cli/src/command/add.cpp

cli/CMakeFiles/BT_cli.dir/src/command/add.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BT_cli.dir/src/command/add.cpp.i"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agar/BitTorrent/cli/src/command/add.cpp > CMakeFiles/BT_cli.dir/src/command/add.cpp.i

cli/CMakeFiles/BT_cli.dir/src/command/add.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BT_cli.dir/src/command/add.cpp.s"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agar/BitTorrent/cli/src/command/add.cpp -o CMakeFiles/BT_cli.dir/src/command/add.cpp.s

cli/CMakeFiles/BT_cli.dir/src/command/del.cpp.o: cli/CMakeFiles/BT_cli.dir/flags.make
cli/CMakeFiles/BT_cli.dir/src/command/del.cpp.o: ../cli/src/command/del.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agar/BitTorrent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object cli/CMakeFiles/BT_cli.dir/src/command/del.cpp.o"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BT_cli.dir/src/command/del.cpp.o -c /home/agar/BitTorrent/cli/src/command/del.cpp

cli/CMakeFiles/BT_cli.dir/src/command/del.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BT_cli.dir/src/command/del.cpp.i"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agar/BitTorrent/cli/src/command/del.cpp > CMakeFiles/BT_cli.dir/src/command/del.cpp.i

cli/CMakeFiles/BT_cli.dir/src/command/del.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BT_cli.dir/src/command/del.cpp.s"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agar/BitTorrent/cli/src/command/del.cpp -o CMakeFiles/BT_cli.dir/src/command/del.cpp.s

cli/CMakeFiles/BT_cli.dir/src/command/help.cpp.o: cli/CMakeFiles/BT_cli.dir/flags.make
cli/CMakeFiles/BT_cli.dir/src/command/help.cpp.o: ../cli/src/command/help.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agar/BitTorrent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object cli/CMakeFiles/BT_cli.dir/src/command/help.cpp.o"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BT_cli.dir/src/command/help.cpp.o -c /home/agar/BitTorrent/cli/src/command/help.cpp

cli/CMakeFiles/BT_cli.dir/src/command/help.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BT_cli.dir/src/command/help.cpp.i"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agar/BitTorrent/cli/src/command/help.cpp > CMakeFiles/BT_cli.dir/src/command/help.cpp.i

cli/CMakeFiles/BT_cli.dir/src/command/help.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BT_cli.dir/src/command/help.cpp.s"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agar/BitTorrent/cli/src/command/help.cpp -o CMakeFiles/BT_cli.dir/src/command/help.cpp.s

cli/CMakeFiles/BT_cli.dir/src/command/info.cpp.o: cli/CMakeFiles/BT_cli.dir/flags.make
cli/CMakeFiles/BT_cli.dir/src/command/info.cpp.o: ../cli/src/command/info.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agar/BitTorrent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object cli/CMakeFiles/BT_cli.dir/src/command/info.cpp.o"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BT_cli.dir/src/command/info.cpp.o -c /home/agar/BitTorrent/cli/src/command/info.cpp

cli/CMakeFiles/BT_cli.dir/src/command/info.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BT_cli.dir/src/command/info.cpp.i"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agar/BitTorrent/cli/src/command/info.cpp > CMakeFiles/BT_cli.dir/src/command/info.cpp.i

cli/CMakeFiles/BT_cli.dir/src/command/info.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BT_cli.dir/src/command/info.cpp.s"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agar/BitTorrent/cli/src/command/info.cpp -o CMakeFiles/BT_cli.dir/src/command/info.cpp.s

cli/CMakeFiles/BT_cli.dir/src/command/pause.cpp.o: cli/CMakeFiles/BT_cli.dir/flags.make
cli/CMakeFiles/BT_cli.dir/src/command/pause.cpp.o: ../cli/src/command/pause.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agar/BitTorrent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object cli/CMakeFiles/BT_cli.dir/src/command/pause.cpp.o"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BT_cli.dir/src/command/pause.cpp.o -c /home/agar/BitTorrent/cli/src/command/pause.cpp

cli/CMakeFiles/BT_cli.dir/src/command/pause.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BT_cli.dir/src/command/pause.cpp.i"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agar/BitTorrent/cli/src/command/pause.cpp > CMakeFiles/BT_cli.dir/src/command/pause.cpp.i

cli/CMakeFiles/BT_cli.dir/src/command/pause.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BT_cli.dir/src/command/pause.cpp.s"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agar/BitTorrent/cli/src/command/pause.cpp -o CMakeFiles/BT_cli.dir/src/command/pause.cpp.s

cli/CMakeFiles/BT_cli.dir/src/command/resume.cpp.o: cli/CMakeFiles/BT_cli.dir/flags.make
cli/CMakeFiles/BT_cli.dir/src/command/resume.cpp.o: ../cli/src/command/resume.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agar/BitTorrent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object cli/CMakeFiles/BT_cli.dir/src/command/resume.cpp.o"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BT_cli.dir/src/command/resume.cpp.o -c /home/agar/BitTorrent/cli/src/command/resume.cpp

cli/CMakeFiles/BT_cli.dir/src/command/resume.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BT_cli.dir/src/command/resume.cpp.i"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agar/BitTorrent/cli/src/command/resume.cpp > CMakeFiles/BT_cli.dir/src/command/resume.cpp.i

cli/CMakeFiles/BT_cli.dir/src/command/resume.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BT_cli.dir/src/command/resume.cpp.s"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agar/BitTorrent/cli/src/command/resume.cpp -o CMakeFiles/BT_cli.dir/src/command/resume.cpp.s

cli/CMakeFiles/BT_cli.dir/src/main.cpp.o: cli/CMakeFiles/BT_cli.dir/flags.make
cli/CMakeFiles/BT_cli.dir/src/main.cpp.o: ../cli/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agar/BitTorrent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object cli/CMakeFiles/BT_cli.dir/src/main.cpp.o"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BT_cli.dir/src/main.cpp.o -c /home/agar/BitTorrent/cli/src/main.cpp

cli/CMakeFiles/BT_cli.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BT_cli.dir/src/main.cpp.i"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agar/BitTorrent/cli/src/main.cpp > CMakeFiles/BT_cli.dir/src/main.cpp.i

cli/CMakeFiles/BT_cli.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BT_cli.dir/src/main.cpp.s"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agar/BitTorrent/cli/src/main.cpp -o CMakeFiles/BT_cli.dir/src/main.cpp.s

# Object files for target BT_cli
BT_cli_OBJECTS = \
"CMakeFiles/BT_cli.dir/src/cli.cpp.o" \
"CMakeFiles/BT_cli.dir/src/command/add.cpp.o" \
"CMakeFiles/BT_cli.dir/src/command/del.cpp.o" \
"CMakeFiles/BT_cli.dir/src/command/help.cpp.o" \
"CMakeFiles/BT_cli.dir/src/command/info.cpp.o" \
"CMakeFiles/BT_cli.dir/src/command/pause.cpp.o" \
"CMakeFiles/BT_cli.dir/src/command/resume.cpp.o" \
"CMakeFiles/BT_cli.dir/src/main.cpp.o"

# External object files for target BT_cli
BT_cli_EXTERNAL_OBJECTS =

cli/BT_cli: cli/CMakeFiles/BT_cli.dir/src/cli.cpp.o
cli/BT_cli: cli/CMakeFiles/BT_cli.dir/src/command/add.cpp.o
cli/BT_cli: cli/CMakeFiles/BT_cli.dir/src/command/del.cpp.o
cli/BT_cli: cli/CMakeFiles/BT_cli.dir/src/command/help.cpp.o
cli/BT_cli: cli/CMakeFiles/BT_cli.dir/src/command/info.cpp.o
cli/BT_cli: cli/CMakeFiles/BT_cli.dir/src/command/pause.cpp.o
cli/BT_cli: cli/CMakeFiles/BT_cli.dir/src/command/resume.cpp.o
cli/BT_cli: cli/CMakeFiles/BT_cli.dir/src/main.cpp.o
cli/BT_cli: cli/CMakeFiles/BT_cli.dir/build.make
cli/BT_cli: cli/CMakeFiles/BT_cli.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/agar/BitTorrent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable BT_cli"
	cd /home/agar/BitTorrent/cmake-build-debug/cli && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BT_cli.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
cli/CMakeFiles/BT_cli.dir/build: cli/BT_cli

.PHONY : cli/CMakeFiles/BT_cli.dir/build

cli/CMakeFiles/BT_cli.dir/clean:
	cd /home/agar/BitTorrent/cmake-build-debug/cli && $(CMAKE_COMMAND) -P CMakeFiles/BT_cli.dir/cmake_clean.cmake
.PHONY : cli/CMakeFiles/BT_cli.dir/clean

cli/CMakeFiles/BT_cli.dir/depend:
	cd /home/agar/BitTorrent/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/agar/BitTorrent /home/agar/BitTorrent/cli /home/agar/BitTorrent/cmake-build-debug /home/agar/BitTorrent/cmake-build-debug/cli /home/agar/BitTorrent/cmake-build-debug/cli/CMakeFiles/BT_cli.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cli/CMakeFiles/BT_cli.dir/depend

