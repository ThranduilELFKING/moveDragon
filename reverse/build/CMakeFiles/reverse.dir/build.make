# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /home/isesol/project/movedragon/reverse

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/isesol/project/movedragon/reverse/build

# Include any dependencies generated for this target.
include CMakeFiles/reverse.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/reverse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/reverse.dir/flags.make

CMakeFiles/reverse.dir/home/isesol/project/movedragon/tools/toolsUse.o: CMakeFiles/reverse.dir/flags.make
CMakeFiles/reverse.dir/home/isesol/project/movedragon/tools/toolsUse.o: /home/isesol/project/movedragon/tools/toolsUse.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/isesol/project/movedragon/reverse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/reverse.dir/home/isesol/project/movedragon/tools/toolsUse.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/reverse.dir/home/isesol/project/movedragon/tools/toolsUse.o -c /home/isesol/project/movedragon/tools/toolsUse.cpp

CMakeFiles/reverse.dir/home/isesol/project/movedragon/tools/toolsUse.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reverse.dir/home/isesol/project/movedragon/tools/toolsUse.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/isesol/project/movedragon/tools/toolsUse.cpp > CMakeFiles/reverse.dir/home/isesol/project/movedragon/tools/toolsUse.i

CMakeFiles/reverse.dir/home/isesol/project/movedragon/tools/toolsUse.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reverse.dir/home/isesol/project/movedragon/tools/toolsUse.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/isesol/project/movedragon/tools/toolsUse.cpp -o CMakeFiles/reverse.dir/home/isesol/project/movedragon/tools/toolsUse.s

CMakeFiles/reverse.dir/reverse.o: CMakeFiles/reverse.dir/flags.make
CMakeFiles/reverse.dir/reverse.o: ../reverse.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/isesol/project/movedragon/reverse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/reverse.dir/reverse.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/reverse.dir/reverse.o -c /home/isesol/project/movedragon/reverse/reverse.cpp

CMakeFiles/reverse.dir/reverse.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reverse.dir/reverse.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/isesol/project/movedragon/reverse/reverse.cpp > CMakeFiles/reverse.dir/reverse.i

CMakeFiles/reverse.dir/reverse.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reverse.dir/reverse.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/isesol/project/movedragon/reverse/reverse.cpp -o CMakeFiles/reverse.dir/reverse.s

# Object files for target reverse
reverse_OBJECTS = \
"CMakeFiles/reverse.dir/home/isesol/project/movedragon/tools/toolsUse.o" \
"CMakeFiles/reverse.dir/reverse.o"

# External object files for target reverse
reverse_EXTERNAL_OBJECTS =

reverse: CMakeFiles/reverse.dir/home/isesol/project/movedragon/tools/toolsUse.o
reverse: CMakeFiles/reverse.dir/reverse.o
reverse: CMakeFiles/reverse.dir/build.make
reverse: CMakeFiles/reverse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/isesol/project/movedragon/reverse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable reverse"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/reverse.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/reverse.dir/build: reverse

.PHONY : CMakeFiles/reverse.dir/build

CMakeFiles/reverse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/reverse.dir/cmake_clean.cmake
.PHONY : CMakeFiles/reverse.dir/clean

CMakeFiles/reverse.dir/depend:
	cd /home/isesol/project/movedragon/reverse/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/isesol/project/movedragon/reverse /home/isesol/project/movedragon/reverse /home/isesol/project/movedragon/reverse/build /home/isesol/project/movedragon/reverse/build /home/isesol/project/movedragon/reverse/build/CMakeFiles/reverse.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/reverse.dir/depend

