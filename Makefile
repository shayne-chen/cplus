# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /data/shaw/cplusplus/exercise

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /data/shaw/cplusplus/exercise

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/local/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/local/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /data/shaw/cplusplus/exercise/CMakeFiles /data/shaw/cplusplus/exercise/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /data/shaw/cplusplus/exercise/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named thread

# Build rule for target.
thread: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 thread
.PHONY : thread

# fast build rule for target.
thread/fast:
	$(MAKE) -f CMakeFiles/thread.dir/build.make CMakeFiles/thread.dir/build
.PHONY : thread/fast

#=============================================================================
# Target rules for targets named test

# Build rule for target.
test: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 test
.PHONY : test

# fast build rule for target.
test/fast:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/build
.PHONY : test/fast

#=============================================================================
# Target rules for targets named run

# Build rule for target.
run: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 run
.PHONY : run

# fast build rule for target.
run/fast:
	$(MAKE) -f CMakeFiles/run.dir/build.make CMakeFiles/run.dir/build
.PHONY : run/fast

src/boring.o: src/boring.cc.o

.PHONY : src/boring.o

# target to build an object file
src/boring.cc.o:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/boring.cc.o
	$(MAKE) -f CMakeFiles/run.dir/build.make CMakeFiles/run.dir/src/boring.cc.o
.PHONY : src/boring.cc.o

src/boring.i: src/boring.cc.i

.PHONY : src/boring.i

# target to preprocess a source file
src/boring.cc.i:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/boring.cc.i
	$(MAKE) -f CMakeFiles/run.dir/build.make CMakeFiles/run.dir/src/boring.cc.i
.PHONY : src/boring.cc.i

src/boring.s: src/boring.cc.s

.PHONY : src/boring.s

# target to generate assembly for a file
src/boring.cc.s:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/boring.cc.s
	$(MAKE) -f CMakeFiles/run.dir/build.make CMakeFiles/run.dir/src/boring.cc.s
.PHONY : src/boring.cc.s

src/boring_test.o: src/boring_test.cc.o

.PHONY : src/boring_test.o

# target to build an object file
src/boring_test.cc.o:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/boring_test.cc.o
.PHONY : src/boring_test.cc.o

src/boring_test.i: src/boring_test.cc.i

.PHONY : src/boring_test.i

# target to preprocess a source file
src/boring_test.cc.i:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/boring_test.cc.i
.PHONY : src/boring_test.cc.i

src/boring_test.s: src/boring_test.cc.s

.PHONY : src/boring_test.s

# target to generate assembly for a file
src/boring_test.cc.s:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/boring_test.cc.s
.PHONY : src/boring_test.cc.s

src/files.o: src/files.cc.o

.PHONY : src/files.o

# target to build an object file
src/files.cc.o:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/files.cc.o
	$(MAKE) -f CMakeFiles/run.dir/build.make CMakeFiles/run.dir/src/files.cc.o
.PHONY : src/files.cc.o

src/files.i: src/files.cc.i

.PHONY : src/files.i

# target to preprocess a source file
src/files.cc.i:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/files.cc.i
	$(MAKE) -f CMakeFiles/run.dir/build.make CMakeFiles/run.dir/src/files.cc.i
.PHONY : src/files.cc.i

src/files.s: src/files.cc.s

.PHONY : src/files.s

# target to generate assembly for a file
src/files.cc.s:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/files.cc.s
	$(MAKE) -f CMakeFiles/run.dir/build.make CMakeFiles/run.dir/src/files.cc.s
.PHONY : src/files.cc.s

src/files_test.o: src/files_test.cc.o

.PHONY : src/files_test.o

# target to build an object file
src/files_test.cc.o:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/files_test.cc.o
.PHONY : src/files_test.cc.o

src/files_test.i: src/files_test.cc.i

.PHONY : src/files_test.i

# target to preprocess a source file
src/files_test.cc.i:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/files_test.cc.i
.PHONY : src/files_test.cc.i

src/files_test.s: src/files_test.cc.s

.PHONY : src/files_test.s

# target to generate assembly for a file
src/files_test.cc.s:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/files_test.cc.s
.PHONY : src/files_test.cc.s

src/main.o: src/main.cc.o

.PHONY : src/main.o

# target to build an object file
src/main.cc.o:
	$(MAKE) -f CMakeFiles/run.dir/build.make CMakeFiles/run.dir/src/main.cc.o
.PHONY : src/main.cc.o

src/main.i: src/main.cc.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cc.i:
	$(MAKE) -f CMakeFiles/run.dir/build.make CMakeFiles/run.dir/src/main.cc.i
.PHONY : src/main.cc.i

src/main.s: src/main.cc.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cc.s:
	$(MAKE) -f CMakeFiles/run.dir/build.make CMakeFiles/run.dir/src/main.cc.s
.PHONY : src/main.cc.s

src/stack.o: src/stack.cc.o

.PHONY : src/stack.o

# target to build an object file
src/stack.cc.o:
	$(MAKE) -f CMakeFiles/run.dir/build.make CMakeFiles/run.dir/src/stack.cc.o
.PHONY : src/stack.cc.o

src/stack.i: src/stack.cc.i

.PHONY : src/stack.i

# target to preprocess a source file
src/stack.cc.i:
	$(MAKE) -f CMakeFiles/run.dir/build.make CMakeFiles/run.dir/src/stack.cc.i
.PHONY : src/stack.cc.i

src/stack.s: src/stack.cc.s

.PHONY : src/stack.s

# target to generate assembly for a file
src/stack.cc.s:
	$(MAKE) -f CMakeFiles/run.dir/build.make CMakeFiles/run.dir/src/stack.cc.s
.PHONY : src/stack.cc.s

src/str.o: src/str.cc.o

.PHONY : src/str.o

# target to build an object file
src/str.cc.o:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/str.cc.o
	$(MAKE) -f CMakeFiles/run.dir/build.make CMakeFiles/run.dir/src/str.cc.o
.PHONY : src/str.cc.o

src/str.i: src/str.cc.i

.PHONY : src/str.i

# target to preprocess a source file
src/str.cc.i:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/str.cc.i
	$(MAKE) -f CMakeFiles/run.dir/build.make CMakeFiles/run.dir/src/str.cc.i
.PHONY : src/str.cc.i

src/str.s: src/str.cc.s

.PHONY : src/str.s

# target to generate assembly for a file
src/str.cc.s:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/str.cc.s
	$(MAKE) -f CMakeFiles/run.dir/build.make CMakeFiles/run.dir/src/str.cc.s
.PHONY : src/str.cc.s

src/str_test.o: src/str_test.cc.o

.PHONY : src/str_test.o

# target to build an object file
src/str_test.cc.o:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/str_test.cc.o
.PHONY : src/str_test.cc.o

src/str_test.i: src/str_test.cc.i

.PHONY : src/str_test.i

# target to preprocess a source file
src/str_test.cc.i:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/str_test.cc.i
.PHONY : src/str_test.cc.i

src/str_test.s: src/str_test.cc.s

.PHONY : src/str_test.s

# target to generate assembly for a file
src/str_test.cc.s:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/str_test.cc.s
.PHONY : src/str_test.cc.s

src/test_main.o: src/test_main.cc.o

.PHONY : src/test_main.o

# target to build an object file
src/test_main.cc.o:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/test_main.cc.o
.PHONY : src/test_main.cc.o

src/test_main.i: src/test_main.cc.i

.PHONY : src/test_main.i

# target to preprocess a source file
src/test_main.cc.i:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/test_main.cc.i
.PHONY : src/test_main.cc.i

src/test_main.s: src/test_main.cc.s

.PHONY : src/test_main.s

# target to generate assembly for a file
src/test_main.cc.s:
	$(MAKE) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/test_main.cc.s
.PHONY : src/test_main.cc.s

src/thread.o: src/thread.cc.o

.PHONY : src/thread.o

# target to build an object file
src/thread.cc.o:
	$(MAKE) -f CMakeFiles/thread.dir/build.make CMakeFiles/thread.dir/src/thread.cc.o
.PHONY : src/thread.cc.o

src/thread.i: src/thread.cc.i

.PHONY : src/thread.i

# target to preprocess a source file
src/thread.cc.i:
	$(MAKE) -f CMakeFiles/thread.dir/build.make CMakeFiles/thread.dir/src/thread.cc.i
.PHONY : src/thread.cc.i

src/thread.s: src/thread.cc.s

.PHONY : src/thread.s

# target to generate assembly for a file
src/thread.cc.s:
	$(MAKE) -f CMakeFiles/thread.dir/build.make CMakeFiles/thread.dir/src/thread.cc.s
.PHONY : src/thread.cc.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... thread"
	@echo "... test"
	@echo "... run"
	@echo "... src/boring.o"
	@echo "... src/boring.i"
	@echo "... src/boring.s"
	@echo "... src/boring_test.o"
	@echo "... src/boring_test.i"
	@echo "... src/boring_test.s"
	@echo "... src/files.o"
	@echo "... src/files.i"
	@echo "... src/files.s"
	@echo "... src/files_test.o"
	@echo "... src/files_test.i"
	@echo "... src/files_test.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
	@echo "... src/stack.o"
	@echo "... src/stack.i"
	@echo "... src/stack.s"
	@echo "... src/str.o"
	@echo "... src/str.i"
	@echo "... src/str.s"
	@echo "... src/str_test.o"
	@echo "... src/str_test.i"
	@echo "... src/str_test.s"
	@echo "... src/test_main.o"
	@echo "... src/test_main.i"
	@echo "... src/test_main.s"
	@echo "... src/thread.o"
	@echo "... src/thread.i"
	@echo "... src/thread.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

