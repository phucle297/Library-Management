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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/aarch64/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/aarch64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/phucle/Desktop/Library-Management

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/phucle/Desktop/Library-Management/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LibraryProject.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/LibraryProject.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/LibraryProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LibraryProject.dir/flags.make

CMakeFiles/LibraryProject.dir/src/main.cpp.o: CMakeFiles/LibraryProject.dir/flags.make
CMakeFiles/LibraryProject.dir/src/main.cpp.o: /Users/phucle/Desktop/Library-Management/src/main.cpp
CMakeFiles/LibraryProject.dir/src/main.cpp.o: CMakeFiles/LibraryProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/phucle/Desktop/Library-Management/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LibraryProject.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LibraryProject.dir/src/main.cpp.o -MF CMakeFiles/LibraryProject.dir/src/main.cpp.o.d -o CMakeFiles/LibraryProject.dir/src/main.cpp.o -c /Users/phucle/Desktop/Library-Management/src/main.cpp

CMakeFiles/LibraryProject.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LibraryProject.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phucle/Desktop/Library-Management/src/main.cpp > CMakeFiles/LibraryProject.dir/src/main.cpp.i

CMakeFiles/LibraryProject.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LibraryProject.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phucle/Desktop/Library-Management/src/main.cpp -o CMakeFiles/LibraryProject.dir/src/main.cpp.s

CMakeFiles/LibraryProject.dir/src/views/reader-view.cpp.o: CMakeFiles/LibraryProject.dir/flags.make
CMakeFiles/LibraryProject.dir/src/views/reader-view.cpp.o: /Users/phucle/Desktop/Library-Management/src/views/reader-view.cpp
CMakeFiles/LibraryProject.dir/src/views/reader-view.cpp.o: CMakeFiles/LibraryProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/phucle/Desktop/Library-Management/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LibraryProject.dir/src/views/reader-view.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LibraryProject.dir/src/views/reader-view.cpp.o -MF CMakeFiles/LibraryProject.dir/src/views/reader-view.cpp.o.d -o CMakeFiles/LibraryProject.dir/src/views/reader-view.cpp.o -c /Users/phucle/Desktop/Library-Management/src/views/reader-view.cpp

CMakeFiles/LibraryProject.dir/src/views/reader-view.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LibraryProject.dir/src/views/reader-view.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phucle/Desktop/Library-Management/src/views/reader-view.cpp > CMakeFiles/LibraryProject.dir/src/views/reader-view.cpp.i

CMakeFiles/LibraryProject.dir/src/views/reader-view.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LibraryProject.dir/src/views/reader-view.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phucle/Desktop/Library-Management/src/views/reader-view.cpp -o CMakeFiles/LibraryProject.dir/src/views/reader-view.cpp.s

CMakeFiles/LibraryProject.dir/src/views/book-view.cpp.o: CMakeFiles/LibraryProject.dir/flags.make
CMakeFiles/LibraryProject.dir/src/views/book-view.cpp.o: /Users/phucle/Desktop/Library-Management/src/views/book-view.cpp
CMakeFiles/LibraryProject.dir/src/views/book-view.cpp.o: CMakeFiles/LibraryProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/phucle/Desktop/Library-Management/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/LibraryProject.dir/src/views/book-view.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LibraryProject.dir/src/views/book-view.cpp.o -MF CMakeFiles/LibraryProject.dir/src/views/book-view.cpp.o.d -o CMakeFiles/LibraryProject.dir/src/views/book-view.cpp.o -c /Users/phucle/Desktop/Library-Management/src/views/book-view.cpp

CMakeFiles/LibraryProject.dir/src/views/book-view.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LibraryProject.dir/src/views/book-view.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phucle/Desktop/Library-Management/src/views/book-view.cpp > CMakeFiles/LibraryProject.dir/src/views/book-view.cpp.i

CMakeFiles/LibraryProject.dir/src/views/book-view.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LibraryProject.dir/src/views/book-view.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phucle/Desktop/Library-Management/src/views/book-view.cpp -o CMakeFiles/LibraryProject.dir/src/views/book-view.cpp.s

CMakeFiles/LibraryProject.dir/src/views/ticket-view.cpp.o: CMakeFiles/LibraryProject.dir/flags.make
CMakeFiles/LibraryProject.dir/src/views/ticket-view.cpp.o: /Users/phucle/Desktop/Library-Management/src/views/ticket-view.cpp
CMakeFiles/LibraryProject.dir/src/views/ticket-view.cpp.o: CMakeFiles/LibraryProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/phucle/Desktop/Library-Management/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/LibraryProject.dir/src/views/ticket-view.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LibraryProject.dir/src/views/ticket-view.cpp.o -MF CMakeFiles/LibraryProject.dir/src/views/ticket-view.cpp.o.d -o CMakeFiles/LibraryProject.dir/src/views/ticket-view.cpp.o -c /Users/phucle/Desktop/Library-Management/src/views/ticket-view.cpp

CMakeFiles/LibraryProject.dir/src/views/ticket-view.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LibraryProject.dir/src/views/ticket-view.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phucle/Desktop/Library-Management/src/views/ticket-view.cpp > CMakeFiles/LibraryProject.dir/src/views/ticket-view.cpp.i

CMakeFiles/LibraryProject.dir/src/views/ticket-view.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LibraryProject.dir/src/views/ticket-view.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phucle/Desktop/Library-Management/src/views/ticket-view.cpp -o CMakeFiles/LibraryProject.dir/src/views/ticket-view.cpp.s

CMakeFiles/LibraryProject.dir/src/views/statistic-view.cpp.o: CMakeFiles/LibraryProject.dir/flags.make
CMakeFiles/LibraryProject.dir/src/views/statistic-view.cpp.o: /Users/phucle/Desktop/Library-Management/src/views/statistic-view.cpp
CMakeFiles/LibraryProject.dir/src/views/statistic-view.cpp.o: CMakeFiles/LibraryProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/phucle/Desktop/Library-Management/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/LibraryProject.dir/src/views/statistic-view.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LibraryProject.dir/src/views/statistic-view.cpp.o -MF CMakeFiles/LibraryProject.dir/src/views/statistic-view.cpp.o.d -o CMakeFiles/LibraryProject.dir/src/views/statistic-view.cpp.o -c /Users/phucle/Desktop/Library-Management/src/views/statistic-view.cpp

CMakeFiles/LibraryProject.dir/src/views/statistic-view.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LibraryProject.dir/src/views/statistic-view.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phucle/Desktop/Library-Management/src/views/statistic-view.cpp > CMakeFiles/LibraryProject.dir/src/views/statistic-view.cpp.i

CMakeFiles/LibraryProject.dir/src/views/statistic-view.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LibraryProject.dir/src/views/statistic-view.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phucle/Desktop/Library-Management/src/views/statistic-view.cpp -o CMakeFiles/LibraryProject.dir/src/views/statistic-view.cpp.s

CMakeFiles/LibraryProject.dir/src/models/reader-model.cpp.o: CMakeFiles/LibraryProject.dir/flags.make
CMakeFiles/LibraryProject.dir/src/models/reader-model.cpp.o: /Users/phucle/Desktop/Library-Management/src/models/reader-model.cpp
CMakeFiles/LibraryProject.dir/src/models/reader-model.cpp.o: CMakeFiles/LibraryProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/phucle/Desktop/Library-Management/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/LibraryProject.dir/src/models/reader-model.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LibraryProject.dir/src/models/reader-model.cpp.o -MF CMakeFiles/LibraryProject.dir/src/models/reader-model.cpp.o.d -o CMakeFiles/LibraryProject.dir/src/models/reader-model.cpp.o -c /Users/phucle/Desktop/Library-Management/src/models/reader-model.cpp

CMakeFiles/LibraryProject.dir/src/models/reader-model.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LibraryProject.dir/src/models/reader-model.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phucle/Desktop/Library-Management/src/models/reader-model.cpp > CMakeFiles/LibraryProject.dir/src/models/reader-model.cpp.i

CMakeFiles/LibraryProject.dir/src/models/reader-model.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LibraryProject.dir/src/models/reader-model.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phucle/Desktop/Library-Management/src/models/reader-model.cpp -o CMakeFiles/LibraryProject.dir/src/models/reader-model.cpp.s

CMakeFiles/LibraryProject.dir/src/views/menu-view.cpp.o: CMakeFiles/LibraryProject.dir/flags.make
CMakeFiles/LibraryProject.dir/src/views/menu-view.cpp.o: /Users/phucle/Desktop/Library-Management/src/views/menu-view.cpp
CMakeFiles/LibraryProject.dir/src/views/menu-view.cpp.o: CMakeFiles/LibraryProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/phucle/Desktop/Library-Management/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/LibraryProject.dir/src/views/menu-view.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LibraryProject.dir/src/views/menu-view.cpp.o -MF CMakeFiles/LibraryProject.dir/src/views/menu-view.cpp.o.d -o CMakeFiles/LibraryProject.dir/src/views/menu-view.cpp.o -c /Users/phucle/Desktop/Library-Management/src/views/menu-view.cpp

CMakeFiles/LibraryProject.dir/src/views/menu-view.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LibraryProject.dir/src/views/menu-view.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phucle/Desktop/Library-Management/src/views/menu-view.cpp > CMakeFiles/LibraryProject.dir/src/views/menu-view.cpp.i

CMakeFiles/LibraryProject.dir/src/views/menu-view.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LibraryProject.dir/src/views/menu-view.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phucle/Desktop/Library-Management/src/views/menu-view.cpp -o CMakeFiles/LibraryProject.dir/src/views/menu-view.cpp.s

CMakeFiles/LibraryProject.dir/src/controllers/menu-controller.cpp.o: CMakeFiles/LibraryProject.dir/flags.make
CMakeFiles/LibraryProject.dir/src/controllers/menu-controller.cpp.o: /Users/phucle/Desktop/Library-Management/src/controllers/menu-controller.cpp
CMakeFiles/LibraryProject.dir/src/controllers/menu-controller.cpp.o: CMakeFiles/LibraryProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/phucle/Desktop/Library-Management/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/LibraryProject.dir/src/controllers/menu-controller.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LibraryProject.dir/src/controllers/menu-controller.cpp.o -MF CMakeFiles/LibraryProject.dir/src/controllers/menu-controller.cpp.o.d -o CMakeFiles/LibraryProject.dir/src/controllers/menu-controller.cpp.o -c /Users/phucle/Desktop/Library-Management/src/controllers/menu-controller.cpp

CMakeFiles/LibraryProject.dir/src/controllers/menu-controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LibraryProject.dir/src/controllers/menu-controller.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phucle/Desktop/Library-Management/src/controllers/menu-controller.cpp > CMakeFiles/LibraryProject.dir/src/controllers/menu-controller.cpp.i

CMakeFiles/LibraryProject.dir/src/controllers/menu-controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LibraryProject.dir/src/controllers/menu-controller.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phucle/Desktop/Library-Management/src/controllers/menu-controller.cpp -o CMakeFiles/LibraryProject.dir/src/controllers/menu-controller.cpp.s

CMakeFiles/LibraryProject.dir/src/controllers/reader-controller.cpp.o: CMakeFiles/LibraryProject.dir/flags.make
CMakeFiles/LibraryProject.dir/src/controllers/reader-controller.cpp.o: /Users/phucle/Desktop/Library-Management/src/controllers/reader-controller.cpp
CMakeFiles/LibraryProject.dir/src/controllers/reader-controller.cpp.o: CMakeFiles/LibraryProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/phucle/Desktop/Library-Management/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/LibraryProject.dir/src/controllers/reader-controller.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LibraryProject.dir/src/controllers/reader-controller.cpp.o -MF CMakeFiles/LibraryProject.dir/src/controllers/reader-controller.cpp.o.d -o CMakeFiles/LibraryProject.dir/src/controllers/reader-controller.cpp.o -c /Users/phucle/Desktop/Library-Management/src/controllers/reader-controller.cpp

CMakeFiles/LibraryProject.dir/src/controllers/reader-controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LibraryProject.dir/src/controllers/reader-controller.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phucle/Desktop/Library-Management/src/controllers/reader-controller.cpp > CMakeFiles/LibraryProject.dir/src/controllers/reader-controller.cpp.i

CMakeFiles/LibraryProject.dir/src/controllers/reader-controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LibraryProject.dir/src/controllers/reader-controller.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phucle/Desktop/Library-Management/src/controllers/reader-controller.cpp -o CMakeFiles/LibraryProject.dir/src/controllers/reader-controller.cpp.s

CMakeFiles/LibraryProject.dir/src/controllers/utils-controller.cpp.o: CMakeFiles/LibraryProject.dir/flags.make
CMakeFiles/LibraryProject.dir/src/controllers/utils-controller.cpp.o: /Users/phucle/Desktop/Library-Management/src/controllers/utils-controller.cpp
CMakeFiles/LibraryProject.dir/src/controllers/utils-controller.cpp.o: CMakeFiles/LibraryProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/phucle/Desktop/Library-Management/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/LibraryProject.dir/src/controllers/utils-controller.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LibraryProject.dir/src/controllers/utils-controller.cpp.o -MF CMakeFiles/LibraryProject.dir/src/controllers/utils-controller.cpp.o.d -o CMakeFiles/LibraryProject.dir/src/controllers/utils-controller.cpp.o -c /Users/phucle/Desktop/Library-Management/src/controllers/utils-controller.cpp

CMakeFiles/LibraryProject.dir/src/controllers/utils-controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LibraryProject.dir/src/controllers/utils-controller.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phucle/Desktop/Library-Management/src/controllers/utils-controller.cpp > CMakeFiles/LibraryProject.dir/src/controllers/utils-controller.cpp.i

CMakeFiles/LibraryProject.dir/src/controllers/utils-controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LibraryProject.dir/src/controllers/utils-controller.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phucle/Desktop/Library-Management/src/controllers/utils-controller.cpp -o CMakeFiles/LibraryProject.dir/src/controllers/utils-controller.cpp.s

CMakeFiles/LibraryProject.dir/src/controllers/book-controller.cpp.o: CMakeFiles/LibraryProject.dir/flags.make
CMakeFiles/LibraryProject.dir/src/controllers/book-controller.cpp.o: /Users/phucle/Desktop/Library-Management/src/controllers/book-controller.cpp
CMakeFiles/LibraryProject.dir/src/controllers/book-controller.cpp.o: CMakeFiles/LibraryProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/phucle/Desktop/Library-Management/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/LibraryProject.dir/src/controllers/book-controller.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LibraryProject.dir/src/controllers/book-controller.cpp.o -MF CMakeFiles/LibraryProject.dir/src/controllers/book-controller.cpp.o.d -o CMakeFiles/LibraryProject.dir/src/controllers/book-controller.cpp.o -c /Users/phucle/Desktop/Library-Management/src/controllers/book-controller.cpp

CMakeFiles/LibraryProject.dir/src/controllers/book-controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LibraryProject.dir/src/controllers/book-controller.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phucle/Desktop/Library-Management/src/controllers/book-controller.cpp > CMakeFiles/LibraryProject.dir/src/controllers/book-controller.cpp.i

CMakeFiles/LibraryProject.dir/src/controllers/book-controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LibraryProject.dir/src/controllers/book-controller.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phucle/Desktop/Library-Management/src/controllers/book-controller.cpp -o CMakeFiles/LibraryProject.dir/src/controllers/book-controller.cpp.s

CMakeFiles/LibraryProject.dir/src/controllers/statictis-controller.cpp.o: CMakeFiles/LibraryProject.dir/flags.make
CMakeFiles/LibraryProject.dir/src/controllers/statictis-controller.cpp.o: /Users/phucle/Desktop/Library-Management/src/controllers/statictis-controller.cpp
CMakeFiles/LibraryProject.dir/src/controllers/statictis-controller.cpp.o: CMakeFiles/LibraryProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/phucle/Desktop/Library-Management/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/LibraryProject.dir/src/controllers/statictis-controller.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LibraryProject.dir/src/controllers/statictis-controller.cpp.o -MF CMakeFiles/LibraryProject.dir/src/controllers/statictis-controller.cpp.o.d -o CMakeFiles/LibraryProject.dir/src/controllers/statictis-controller.cpp.o -c /Users/phucle/Desktop/Library-Management/src/controllers/statictis-controller.cpp

CMakeFiles/LibraryProject.dir/src/controllers/statictis-controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LibraryProject.dir/src/controllers/statictis-controller.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phucle/Desktop/Library-Management/src/controllers/statictis-controller.cpp > CMakeFiles/LibraryProject.dir/src/controllers/statictis-controller.cpp.i

CMakeFiles/LibraryProject.dir/src/controllers/statictis-controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LibraryProject.dir/src/controllers/statictis-controller.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phucle/Desktop/Library-Management/src/controllers/statictis-controller.cpp -o CMakeFiles/LibraryProject.dir/src/controllers/statictis-controller.cpp.s

CMakeFiles/LibraryProject.dir/src/controllers/ticket-controller.cpp.o: CMakeFiles/LibraryProject.dir/flags.make
CMakeFiles/LibraryProject.dir/src/controllers/ticket-controller.cpp.o: /Users/phucle/Desktop/Library-Management/src/controllers/ticket-controller.cpp
CMakeFiles/LibraryProject.dir/src/controllers/ticket-controller.cpp.o: CMakeFiles/LibraryProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/phucle/Desktop/Library-Management/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/LibraryProject.dir/src/controllers/ticket-controller.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LibraryProject.dir/src/controllers/ticket-controller.cpp.o -MF CMakeFiles/LibraryProject.dir/src/controllers/ticket-controller.cpp.o.d -o CMakeFiles/LibraryProject.dir/src/controllers/ticket-controller.cpp.o -c /Users/phucle/Desktop/Library-Management/src/controllers/ticket-controller.cpp

CMakeFiles/LibraryProject.dir/src/controllers/ticket-controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LibraryProject.dir/src/controllers/ticket-controller.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phucle/Desktop/Library-Management/src/controllers/ticket-controller.cpp > CMakeFiles/LibraryProject.dir/src/controllers/ticket-controller.cpp.i

CMakeFiles/LibraryProject.dir/src/controllers/ticket-controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LibraryProject.dir/src/controllers/ticket-controller.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phucle/Desktop/Library-Management/src/controllers/ticket-controller.cpp -o CMakeFiles/LibraryProject.dir/src/controllers/ticket-controller.cpp.s

# Object files for target LibraryProject
LibraryProject_OBJECTS = \
"CMakeFiles/LibraryProject.dir/src/main.cpp.o" \
"CMakeFiles/LibraryProject.dir/src/views/reader-view.cpp.o" \
"CMakeFiles/LibraryProject.dir/src/views/book-view.cpp.o" \
"CMakeFiles/LibraryProject.dir/src/views/ticket-view.cpp.o" \
"CMakeFiles/LibraryProject.dir/src/views/statistic-view.cpp.o" \
"CMakeFiles/LibraryProject.dir/src/models/reader-model.cpp.o" \
"CMakeFiles/LibraryProject.dir/src/views/menu-view.cpp.o" \
"CMakeFiles/LibraryProject.dir/src/controllers/menu-controller.cpp.o" \
"CMakeFiles/LibraryProject.dir/src/controllers/reader-controller.cpp.o" \
"CMakeFiles/LibraryProject.dir/src/controllers/utils-controller.cpp.o" \
"CMakeFiles/LibraryProject.dir/src/controllers/book-controller.cpp.o" \
"CMakeFiles/LibraryProject.dir/src/controllers/statictis-controller.cpp.o" \
"CMakeFiles/LibraryProject.dir/src/controllers/ticket-controller.cpp.o"

# External object files for target LibraryProject
LibraryProject_EXTERNAL_OBJECTS =

LibraryProject: CMakeFiles/LibraryProject.dir/src/main.cpp.o
LibraryProject: CMakeFiles/LibraryProject.dir/src/views/reader-view.cpp.o
LibraryProject: CMakeFiles/LibraryProject.dir/src/views/book-view.cpp.o
LibraryProject: CMakeFiles/LibraryProject.dir/src/views/ticket-view.cpp.o
LibraryProject: CMakeFiles/LibraryProject.dir/src/views/statistic-view.cpp.o
LibraryProject: CMakeFiles/LibraryProject.dir/src/models/reader-model.cpp.o
LibraryProject: CMakeFiles/LibraryProject.dir/src/views/menu-view.cpp.o
LibraryProject: CMakeFiles/LibraryProject.dir/src/controllers/menu-controller.cpp.o
LibraryProject: CMakeFiles/LibraryProject.dir/src/controllers/reader-controller.cpp.o
LibraryProject: CMakeFiles/LibraryProject.dir/src/controllers/utils-controller.cpp.o
LibraryProject: CMakeFiles/LibraryProject.dir/src/controllers/book-controller.cpp.o
LibraryProject: CMakeFiles/LibraryProject.dir/src/controllers/statictis-controller.cpp.o
LibraryProject: CMakeFiles/LibraryProject.dir/src/controllers/ticket-controller.cpp.o
LibraryProject: CMakeFiles/LibraryProject.dir/build.make
LibraryProject: CMakeFiles/LibraryProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/phucle/Desktop/Library-Management/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable LibraryProject"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LibraryProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LibraryProject.dir/build: LibraryProject
.PHONY : CMakeFiles/LibraryProject.dir/build

CMakeFiles/LibraryProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LibraryProject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LibraryProject.dir/clean

CMakeFiles/LibraryProject.dir/depend:
	cd /Users/phucle/Desktop/Library-Management/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/phucle/Desktop/Library-Management /Users/phucle/Desktop/Library-Management /Users/phucle/Desktop/Library-Management/cmake-build-debug /Users/phucle/Desktop/Library-Management/cmake-build-debug /Users/phucle/Desktop/Library-Management/cmake-build-debug/CMakeFiles/LibraryProject.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/LibraryProject.dir/depend

