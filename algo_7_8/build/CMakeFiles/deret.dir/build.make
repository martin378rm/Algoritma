# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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

#Suppress display of executed commands.
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
CMAKE_SOURCE_DIR = /home/Lynx/Algoritma/algo_7_8

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/Lynx/Algoritma/algo_7_8/build

# Include any dependencies generated for this target.
include CMakeFiles/deret.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/deret.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/deret.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/deret.dir/flags.make

CMakeFiles/deret.dir/deret.cpp.o: CMakeFiles/deret.dir/flags.make
CMakeFiles/deret.dir/deret.cpp.o: /home/Lynx/Algoritma/algo_7_8/deret.cpp
CMakeFiles/deret.dir/deret.cpp.o: CMakeFiles/deret.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/Lynx/Algoritma/algo_7_8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/deret.dir/deret.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/deret.dir/deret.cpp.o -MF CMakeFiles/deret.dir/deret.cpp.o.d -o CMakeFiles/deret.dir/deret.cpp.o -c /home/Lynx/Algoritma/algo_7_8/deret.cpp

CMakeFiles/deret.dir/deret.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/deret.dir/deret.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/Lynx/Algoritma/algo_7_8/deret.cpp > CMakeFiles/deret.dir/deret.cpp.i

CMakeFiles/deret.dir/deret.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/deret.dir/deret.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/Lynx/Algoritma/algo_7_8/deret.cpp -o CMakeFiles/deret.dir/deret.cpp.s

# Object files for target deret
deret_OBJECTS = \
"CMakeFiles/deret.dir/deret.cpp.o"

# External object files for target deret
deret_EXTERNAL_OBJECTS =

deret: CMakeFiles/deret.dir/deret.cpp.o
deret: CMakeFiles/deret.dir/build.make
deret: CMakeFiles/deret.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/Lynx/Algoritma/algo_7_8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable deret"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/deret.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/deret.dir/build: deret
.PHONY : CMakeFiles/deret.dir/build

CMakeFiles/deret.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/deret.dir/cmake_clean.cmake
.PHONY : CMakeFiles/deret.dir/clean

CMakeFiles/deret.dir/depend:
	cd /home/Lynx/Algoritma/algo_7_8/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/Lynx/Algoritma/algo_7_8 /home/Lynx/Algoritma/algo_7_8 /home/Lynx/Algoritma/algo_7_8/build /home/Lynx/Algoritma/algo_7_8/build /home/Lynx/Algoritma/algo_7_8/build/CMakeFiles/deret.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/deret.dir/depend
