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
CMAKE_SOURCE_DIR = /home/user/hal-core-2.0/vendor/scurve/scurve_jog_plot_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/hal-core-2.0/vendor/scurve/build-scurve_jog_plot_1-Qt_5_15_1_gcc_64_109739-Debug

# Include any dependencies generated for this target.
include CMakeFiles/scurve_jog_plot.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/scurve_jog_plot.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/scurve_jog_plot.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/scurve_jog_plot.dir/flags.make

CMakeFiles/scurve_jog_plot.dir/scurve_jog_plot_autogen/mocs_compilation.cpp.o: CMakeFiles/scurve_jog_plot.dir/flags.make
CMakeFiles/scurve_jog_plot.dir/scurve_jog_plot_autogen/mocs_compilation.cpp.o: scurve_jog_plot_autogen/mocs_compilation.cpp
CMakeFiles/scurve_jog_plot.dir/scurve_jog_plot_autogen/mocs_compilation.cpp.o: CMakeFiles/scurve_jog_plot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/hal-core-2.0/vendor/scurve/build-scurve_jog_plot_1-Qt_5_15_1_gcc_64_109739-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/scurve_jog_plot.dir/scurve_jog_plot_autogen/mocs_compilation.cpp.o"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/scurve_jog_plot.dir/scurve_jog_plot_autogen/mocs_compilation.cpp.o -MF CMakeFiles/scurve_jog_plot.dir/scurve_jog_plot_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/scurve_jog_plot.dir/scurve_jog_plot_autogen/mocs_compilation.cpp.o -c /home/user/hal-core-2.0/vendor/scurve/build-scurve_jog_plot_1-Qt_5_15_1_gcc_64_109739-Debug/scurve_jog_plot_autogen/mocs_compilation.cpp

CMakeFiles/scurve_jog_plot.dir/scurve_jog_plot_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scurve_jog_plot.dir/scurve_jog_plot_autogen/mocs_compilation.cpp.i"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/hal-core-2.0/vendor/scurve/build-scurve_jog_plot_1-Qt_5_15_1_gcc_64_109739-Debug/scurve_jog_plot_autogen/mocs_compilation.cpp > CMakeFiles/scurve_jog_plot.dir/scurve_jog_plot_autogen/mocs_compilation.cpp.i

CMakeFiles/scurve_jog_plot.dir/scurve_jog_plot_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scurve_jog_plot.dir/scurve_jog_plot_autogen/mocs_compilation.cpp.s"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/hal-core-2.0/vendor/scurve/build-scurve_jog_plot_1-Qt_5_15_1_gcc_64_109739-Debug/scurve_jog_plot_autogen/mocs_compilation.cpp -o CMakeFiles/scurve_jog_plot.dir/scurve_jog_plot_autogen/mocs_compilation.cpp.s

CMakeFiles/scurve_jog_plot.dir/main.cpp.o: CMakeFiles/scurve_jog_plot.dir/flags.make
CMakeFiles/scurve_jog_plot.dir/main.cpp.o: /home/user/hal-core-2.0/vendor/scurve/scurve_jog_plot_1/main.cpp
CMakeFiles/scurve_jog_plot.dir/main.cpp.o: CMakeFiles/scurve_jog_plot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/hal-core-2.0/vendor/scurve/build-scurve_jog_plot_1-Qt_5_15_1_gcc_64_109739-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/scurve_jog_plot.dir/main.cpp.o"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/scurve_jog_plot.dir/main.cpp.o -MF CMakeFiles/scurve_jog_plot.dir/main.cpp.o.d -o CMakeFiles/scurve_jog_plot.dir/main.cpp.o -c /home/user/hal-core-2.0/vendor/scurve/scurve_jog_plot_1/main.cpp

CMakeFiles/scurve_jog_plot.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scurve_jog_plot.dir/main.cpp.i"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/hal-core-2.0/vendor/scurve/scurve_jog_plot_1/main.cpp > CMakeFiles/scurve_jog_plot.dir/main.cpp.i

CMakeFiles/scurve_jog_plot.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scurve_jog_plot.dir/main.cpp.s"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/hal-core-2.0/vendor/scurve/scurve_jog_plot_1/main.cpp -o CMakeFiles/scurve_jog_plot.dir/main.cpp.s

CMakeFiles/scurve_jog_plot.dir/mainwindow.cpp.o: CMakeFiles/scurve_jog_plot.dir/flags.make
CMakeFiles/scurve_jog_plot.dir/mainwindow.cpp.o: /home/user/hal-core-2.0/vendor/scurve/scurve_jog_plot_1/mainwindow.cpp
CMakeFiles/scurve_jog_plot.dir/mainwindow.cpp.o: CMakeFiles/scurve_jog_plot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/hal-core-2.0/vendor/scurve/build-scurve_jog_plot_1-Qt_5_15_1_gcc_64_109739-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/scurve_jog_plot.dir/mainwindow.cpp.o"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/scurve_jog_plot.dir/mainwindow.cpp.o -MF CMakeFiles/scurve_jog_plot.dir/mainwindow.cpp.o.d -o CMakeFiles/scurve_jog_plot.dir/mainwindow.cpp.o -c /home/user/hal-core-2.0/vendor/scurve/scurve_jog_plot_1/mainwindow.cpp

CMakeFiles/scurve_jog_plot.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scurve_jog_plot.dir/mainwindow.cpp.i"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/hal-core-2.0/vendor/scurve/scurve_jog_plot_1/mainwindow.cpp > CMakeFiles/scurve_jog_plot.dir/mainwindow.cpp.i

CMakeFiles/scurve_jog_plot.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scurve_jog_plot.dir/mainwindow.cpp.s"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/hal-core-2.0/vendor/scurve/scurve_jog_plot_1/mainwindow.cpp -o CMakeFiles/scurve_jog_plot.dir/mainwindow.cpp.s

CMakeFiles/scurve_jog_plot.dir/qcustomplot.cpp.o: CMakeFiles/scurve_jog_plot.dir/flags.make
CMakeFiles/scurve_jog_plot.dir/qcustomplot.cpp.o: /home/user/hal-core-2.0/vendor/scurve/scurve_jog_plot_1/qcustomplot.cpp
CMakeFiles/scurve_jog_plot.dir/qcustomplot.cpp.o: CMakeFiles/scurve_jog_plot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/hal-core-2.0/vendor/scurve/build-scurve_jog_plot_1-Qt_5_15_1_gcc_64_109739-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/scurve_jog_plot.dir/qcustomplot.cpp.o"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/scurve_jog_plot.dir/qcustomplot.cpp.o -MF CMakeFiles/scurve_jog_plot.dir/qcustomplot.cpp.o.d -o CMakeFiles/scurve_jog_plot.dir/qcustomplot.cpp.o -c /home/user/hal-core-2.0/vendor/scurve/scurve_jog_plot_1/qcustomplot.cpp

CMakeFiles/scurve_jog_plot.dir/qcustomplot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scurve_jog_plot.dir/qcustomplot.cpp.i"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/hal-core-2.0/vendor/scurve/scurve_jog_plot_1/qcustomplot.cpp > CMakeFiles/scurve_jog_plot.dir/qcustomplot.cpp.i

CMakeFiles/scurve_jog_plot.dir/qcustomplot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scurve_jog_plot.dir/qcustomplot.cpp.s"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/hal-core-2.0/vendor/scurve/scurve_jog_plot_1/qcustomplot.cpp -o CMakeFiles/scurve_jog_plot.dir/qcustomplot.cpp.s

CMakeFiles/scurve_jog_plot.dir/home/user/hal-core-2.0/vendor/scurve/scurve_engine/scurve_engine.cpp.o: CMakeFiles/scurve_jog_plot.dir/flags.make
CMakeFiles/scurve_jog_plot.dir/home/user/hal-core-2.0/vendor/scurve/scurve_engine/scurve_engine.cpp.o: /home/user/hal-core-2.0/vendor/scurve/scurve_engine/scurve_engine.cpp
CMakeFiles/scurve_jog_plot.dir/home/user/hal-core-2.0/vendor/scurve/scurve_engine/scurve_engine.cpp.o: CMakeFiles/scurve_jog_plot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/hal-core-2.0/vendor/scurve/build-scurve_jog_plot_1-Qt_5_15_1_gcc_64_109739-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/scurve_jog_plot.dir/home/user/hal-core-2.0/vendor/scurve/scurve_engine/scurve_engine.cpp.o"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/scurve_jog_plot.dir/home/user/hal-core-2.0/vendor/scurve/scurve_engine/scurve_engine.cpp.o -MF CMakeFiles/scurve_jog_plot.dir/home/user/hal-core-2.0/vendor/scurve/scurve_engine/scurve_engine.cpp.o.d -o CMakeFiles/scurve_jog_plot.dir/home/user/hal-core-2.0/vendor/scurve/scurve_engine/scurve_engine.cpp.o -c /home/user/hal-core-2.0/vendor/scurve/scurve_engine/scurve_engine.cpp

CMakeFiles/scurve_jog_plot.dir/home/user/hal-core-2.0/vendor/scurve/scurve_engine/scurve_engine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scurve_jog_plot.dir/home/user/hal-core-2.0/vendor/scurve/scurve_engine/scurve_engine.cpp.i"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/hal-core-2.0/vendor/scurve/scurve_engine/scurve_engine.cpp > CMakeFiles/scurve_jog_plot.dir/home/user/hal-core-2.0/vendor/scurve/scurve_engine/scurve_engine.cpp.i

CMakeFiles/scurve_jog_plot.dir/home/user/hal-core-2.0/vendor/scurve/scurve_engine/scurve_engine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scurve_jog_plot.dir/home/user/hal-core-2.0/vendor/scurve/scurve_engine/scurve_engine.cpp.s"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/hal-core-2.0/vendor/scurve/scurve_engine/scurve_engine.cpp -o CMakeFiles/scurve_jog_plot.dir/home/user/hal-core-2.0/vendor/scurve/scurve_engine/scurve_engine.cpp.s

# Object files for target scurve_jog_plot
scurve_jog_plot_OBJECTS = \
"CMakeFiles/scurve_jog_plot.dir/scurve_jog_plot_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/scurve_jog_plot.dir/main.cpp.o" \
"CMakeFiles/scurve_jog_plot.dir/mainwindow.cpp.o" \
"CMakeFiles/scurve_jog_plot.dir/qcustomplot.cpp.o" \
"CMakeFiles/scurve_jog_plot.dir/home/user/hal-core-2.0/vendor/scurve/scurve_engine/scurve_engine.cpp.o"

# External object files for target scurve_jog_plot
scurve_jog_plot_EXTERNAL_OBJECTS =

scurve_jog_plot: CMakeFiles/scurve_jog_plot.dir/scurve_jog_plot_autogen/mocs_compilation.cpp.o
scurve_jog_plot: CMakeFiles/scurve_jog_plot.dir/main.cpp.o
scurve_jog_plot: CMakeFiles/scurve_jog_plot.dir/mainwindow.cpp.o
scurve_jog_plot: CMakeFiles/scurve_jog_plot.dir/qcustomplot.cpp.o
scurve_jog_plot: CMakeFiles/scurve_jog_plot.dir/home/user/hal-core-2.0/vendor/scurve/scurve_engine/scurve_engine.cpp.o
scurve_jog_plot: CMakeFiles/scurve_jog_plot.dir/build.make
scurve_jog_plot: /opt/qt-creator/5.15.1/gcc_64/lib/libQt5PrintSupport.so.5.15.1
scurve_jog_plot: /opt/qt-creator/5.15.1/gcc_64/lib/libQt5Widgets.so.5.15.1
scurve_jog_plot: /opt/qt-creator/5.15.1/gcc_64/lib/libQt5Gui.so.5.15.1
scurve_jog_plot: /opt/qt-creator/5.15.1/gcc_64/lib/libQt5Core.so.5.15.1
scurve_jog_plot: CMakeFiles/scurve_jog_plot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/hal-core-2.0/vendor/scurve/build-scurve_jog_plot_1-Qt_5_15_1_gcc_64_109739-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable scurve_jog_plot"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/scurve_jog_plot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/scurve_jog_plot.dir/build: scurve_jog_plot
.PHONY : CMakeFiles/scurve_jog_plot.dir/build

CMakeFiles/scurve_jog_plot.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/scurve_jog_plot.dir/cmake_clean.cmake
.PHONY : CMakeFiles/scurve_jog_plot.dir/clean

CMakeFiles/scurve_jog_plot.dir/depend:
	cd /home/user/hal-core-2.0/vendor/scurve/build-scurve_jog_plot_1-Qt_5_15_1_gcc_64_109739-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/hal-core-2.0/vendor/scurve/scurve_jog_plot_1 /home/user/hal-core-2.0/vendor/scurve/scurve_jog_plot_1 /home/user/hal-core-2.0/vendor/scurve/build-scurve_jog_plot_1-Qt_5_15_1_gcc_64_109739-Debug /home/user/hal-core-2.0/vendor/scurve/build-scurve_jog_plot_1-Qt_5_15_1_gcc_64_109739-Debug /home/user/hal-core-2.0/vendor/scurve/build-scurve_jog_plot_1-Qt_5_15_1_gcc_64_109739-Debug/CMakeFiles/scurve_jog_plot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/scurve_jog_plot.dir/depend
