# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/ncrl/My_WorkSpace/practice_polymorphism/practice_c_plus_plus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ncrl/My_WorkSpace/practice_polymorphism/practice_c_plus_plus/build

# Utility rule file for clean-cmake-files.

# Include the progress variables for this target.
include CMakeFiles/clean-cmake-files.dir/progress.make

CMakeFiles/clean-cmake-files:
	/usr/bin/cmake -P clean-all.cmake

clean-cmake-files: CMakeFiles/clean-cmake-files
clean-cmake-files: CMakeFiles/clean-cmake-files.dir/build.make

.PHONY : clean-cmake-files

# Rule to build all files generated by this target.
CMakeFiles/clean-cmake-files.dir/build: clean-cmake-files

.PHONY : CMakeFiles/clean-cmake-files.dir/build

CMakeFiles/clean-cmake-files.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/clean-cmake-files.dir/cmake_clean.cmake
.PHONY : CMakeFiles/clean-cmake-files.dir/clean

CMakeFiles/clean-cmake-files.dir/depend:
	cd /home/ncrl/My_WorkSpace/practice_polymorphism/practice_c_plus_plus/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ncrl/My_WorkSpace/practice_polymorphism/practice_c_plus_plus /home/ncrl/My_WorkSpace/practice_polymorphism/practice_c_plus_plus /home/ncrl/My_WorkSpace/practice_polymorphism/practice_c_plus_plus/build /home/ncrl/My_WorkSpace/practice_polymorphism/practice_c_plus_plus/build /home/ncrl/My_WorkSpace/practice_polymorphism/practice_c_plus_plus/build/CMakeFiles/clean-cmake-files.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/clean-cmake-files.dir/depend
