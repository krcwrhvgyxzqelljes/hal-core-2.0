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
CMAKE_SOURCE_DIR = /home/user/hal-core-2.0/vendor/scurve

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/hal-core-2.0/vendor/build-scurve-Desktop-Debug

# Utility rule file for scurve_auto_plot_autogen.

# Include any custom commands dependencies for this target.
include scurve_auto_plot/CMakeFiles/scurve_auto_plot_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include scurve_auto_plot/CMakeFiles/scurve_auto_plot_autogen.dir/progress.make

scurve_auto_plot/CMakeFiles/scurve_auto_plot_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/hal-core-2.0/vendor/build-scurve-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target scurve_auto_plot"
	cd /home/user/hal-core-2.0/vendor/build-scurve-Desktop-Debug/scurve_auto_plot && /usr/bin/cmake -E cmake_autogen /home/user/hal-core-2.0/vendor/build-scurve-Desktop-Debug/scurve_auto_plot/CMakeFiles/scurve_auto_plot_autogen.dir/AutogenInfo.json Debug

scurve_auto_plot_autogen: scurve_auto_plot/CMakeFiles/scurve_auto_plot_autogen
scurve_auto_plot_autogen: scurve_auto_plot/CMakeFiles/scurve_auto_plot_autogen.dir/build.make
.PHONY : scurve_auto_plot_autogen

# Rule to build all files generated by this target.
scurve_auto_plot/CMakeFiles/scurve_auto_plot_autogen.dir/build: scurve_auto_plot_autogen
.PHONY : scurve_auto_plot/CMakeFiles/scurve_auto_plot_autogen.dir/build

scurve_auto_plot/CMakeFiles/scurve_auto_plot_autogen.dir/clean:
	cd /home/user/hal-core-2.0/vendor/build-scurve-Desktop-Debug/scurve_auto_plot && $(CMAKE_COMMAND) -P CMakeFiles/scurve_auto_plot_autogen.dir/cmake_clean.cmake
.PHONY : scurve_auto_plot/CMakeFiles/scurve_auto_plot_autogen.dir/clean

scurve_auto_plot/CMakeFiles/scurve_auto_plot_autogen.dir/depend:
	cd /home/user/hal-core-2.0/vendor/build-scurve-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/hal-core-2.0/vendor/scurve /home/user/hal-core-2.0/vendor/scurve/scurve_auto_plot /home/user/hal-core-2.0/vendor/build-scurve-Desktop-Debug /home/user/hal-core-2.0/vendor/build-scurve-Desktop-Debug/scurve_auto_plot /home/user/hal-core-2.0/vendor/build-scurve-Desktop-Debug/scurve_auto_plot/CMakeFiles/scurve_auto_plot_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : scurve_auto_plot/CMakeFiles/scurve_auto_plot_autogen.dir/depend
