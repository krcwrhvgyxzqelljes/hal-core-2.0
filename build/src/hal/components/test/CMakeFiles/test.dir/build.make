# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_SOURCE_DIR = /home/user/hal-core-2.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/hal-core-2.0/build

# Include any dependencies generated for this target.
include src/hal/components/test/CMakeFiles/test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/hal/components/test/CMakeFiles/test.dir/compiler_depend.make

# Include the progress variables for this target.
include src/hal/components/test/CMakeFiles/test.dir/progress.make

# Include the compile flags for this target's objects.
include src/hal/components/test/CMakeFiles/test.dir/flags.make

src/hal/components/test/CMakeFiles/test.dir/test.c.o: src/hal/components/test/CMakeFiles/test.dir/flags.make
src/hal/components/test/CMakeFiles/test.dir/test.c.o: /home/user/hal-core-2.0/src/hal/components/test/test.c
src/hal/components/test/CMakeFiles/test.dir/test.c.o: src/hal/components/test/CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/hal-core-2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/hal/components/test/CMakeFiles/test.dir/test.c.o"
	cd /home/user/hal-core-2.0/build/src/hal/components/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/hal/components/test/CMakeFiles/test.dir/test.c.o -MF CMakeFiles/test.dir/test.c.o.d -o CMakeFiles/test.dir/test.c.o -c /home/user/hal-core-2.0/src/hal/components/test/test.c

src/hal/components/test/CMakeFiles/test.dir/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test.dir/test.c.i"
	cd /home/user/hal-core-2.0/build/src/hal/components/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/hal-core-2.0/src/hal/components/test/test.c > CMakeFiles/test.dir/test.c.i

src/hal/components/test/CMakeFiles/test.dir/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test.dir/test.c.s"
	cd /home/user/hal-core-2.0/build/src/hal/components/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/hal-core-2.0/src/hal/components/test/test.c -o CMakeFiles/test.dir/test.c.s

# Object files for target test
test_OBJECTS = \
"CMakeFiles/test.dir/test.c.o"

# External object files for target test
test_EXTERNAL_OBJECTS =

src/hal/components/test/test.so: src/hal/components/test/CMakeFiles/test.dir/test.c.o
src/hal/components/test/test.so: src/hal/components/test/CMakeFiles/test.dir/build.make
src/hal/components/test/test.so: src/hal/halcore/libhalcore.so
src/hal/components/test/test.so: src/hal/components/test/CMakeFiles/test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/hal-core-2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library test.so"
	cd /home/user/hal-core-2.0/build/src/hal/components/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/hal/components/test/CMakeFiles/test.dir/build: src/hal/components/test/test.so
.PHONY : src/hal/components/test/CMakeFiles/test.dir/build

src/hal/components/test/CMakeFiles/test.dir/clean:
	cd /home/user/hal-core-2.0/build/src/hal/components/test && $(CMAKE_COMMAND) -P CMakeFiles/test.dir/cmake_clean.cmake
.PHONY : src/hal/components/test/CMakeFiles/test.dir/clean

src/hal/components/test/CMakeFiles/test.dir/depend:
	cd /home/user/hal-core-2.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/hal-core-2.0 /home/user/hal-core-2.0/src/hal/components/test /home/user/hal-core-2.0/build /home/user/hal-core-2.0/build/src/hal/components/test /home/user/hal-core-2.0/build/src/hal/components/test/CMakeFiles/test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/hal/components/test/CMakeFiles/test.dir/depend

