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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zatt/Documents/Git/Enigma

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zatt/Documents/Git/Enigma

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/zatt/Documents/Git/Enigma/CMakeFiles /home/zatt/Documents/Git/Enigma/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/zatt/Documents/Git/Enigma/CMakeFiles 0
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
# Target rules for targets named Enigma

# Build rule for target.
Enigma: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 Enigma
.PHONY : Enigma

# fast build rule for target.
Enigma/fast:
	$(MAKE) -f CMakeFiles/Enigma.dir/build.make CMakeFiles/Enigma.dir/build
.PHONY : Enigma/fast

src/Command.o: src/Command.cc.o

.PHONY : src/Command.o

# target to build an object file
src/Command.cc.o:
	$(MAKE) -f CMakeFiles/Enigma.dir/build.make CMakeFiles/Enigma.dir/src/Command.cc.o
.PHONY : src/Command.cc.o

src/Command.i: src/Command.cc.i

.PHONY : src/Command.i

# target to preprocess a source file
src/Command.cc.i:
	$(MAKE) -f CMakeFiles/Enigma.dir/build.make CMakeFiles/Enigma.dir/src/Command.cc.i
.PHONY : src/Command.cc.i

src/Command.s: src/Command.cc.s

.PHONY : src/Command.s

# target to generate assembly for a file
src/Command.cc.s:
	$(MAKE) -f CMakeFiles/Enigma.dir/build.make CMakeFiles/Enigma.dir/src/Command.cc.s
.PHONY : src/Command.cc.s

src/Plugboard.o: src/Plugboard.cc.o

.PHONY : src/Plugboard.o

# target to build an object file
src/Plugboard.cc.o:
	$(MAKE) -f CMakeFiles/Enigma.dir/build.make CMakeFiles/Enigma.dir/src/Plugboard.cc.o
.PHONY : src/Plugboard.cc.o

src/Plugboard.i: src/Plugboard.cc.i

.PHONY : src/Plugboard.i

# target to preprocess a source file
src/Plugboard.cc.i:
	$(MAKE) -f CMakeFiles/Enigma.dir/build.make CMakeFiles/Enigma.dir/src/Plugboard.cc.i
.PHONY : src/Plugboard.cc.i

src/Plugboard.s: src/Plugboard.cc.s

.PHONY : src/Plugboard.s

# target to generate assembly for a file
src/Plugboard.cc.s:
	$(MAKE) -f CMakeFiles/Enigma.dir/build.make CMakeFiles/Enigma.dir/src/Plugboard.cc.s
.PHONY : src/Plugboard.cc.s

src/Rotor.o: src/Rotor.cc.o

.PHONY : src/Rotor.o

# target to build an object file
src/Rotor.cc.o:
	$(MAKE) -f CMakeFiles/Enigma.dir/build.make CMakeFiles/Enigma.dir/src/Rotor.cc.o
.PHONY : src/Rotor.cc.o

src/Rotor.i: src/Rotor.cc.i

.PHONY : src/Rotor.i

# target to preprocess a source file
src/Rotor.cc.i:
	$(MAKE) -f CMakeFiles/Enigma.dir/build.make CMakeFiles/Enigma.dir/src/Rotor.cc.i
.PHONY : src/Rotor.cc.i

src/Rotor.s: src/Rotor.cc.s

.PHONY : src/Rotor.s

# target to generate assembly for a file
src/Rotor.cc.s:
	$(MAKE) -f CMakeFiles/Enigma.dir/build.make CMakeFiles/Enigma.dir/src/Rotor.cc.s
.PHONY : src/Rotor.cc.s

src/RotorSystem.o: src/RotorSystem.cc.o

.PHONY : src/RotorSystem.o

# target to build an object file
src/RotorSystem.cc.o:
	$(MAKE) -f CMakeFiles/Enigma.dir/build.make CMakeFiles/Enigma.dir/src/RotorSystem.cc.o
.PHONY : src/RotorSystem.cc.o

src/RotorSystem.i: src/RotorSystem.cc.i

.PHONY : src/RotorSystem.i

# target to preprocess a source file
src/RotorSystem.cc.i:
	$(MAKE) -f CMakeFiles/Enigma.dir/build.make CMakeFiles/Enigma.dir/src/RotorSystem.cc.i
.PHONY : src/RotorSystem.cc.i

src/RotorSystem.s: src/RotorSystem.cc.s

.PHONY : src/RotorSystem.s

# target to generate assembly for a file
src/RotorSystem.cc.s:
	$(MAKE) -f CMakeFiles/Enigma.dir/build.make CMakeFiles/Enigma.dir/src/RotorSystem.cc.s
.PHONY : src/RotorSystem.cc.s

src/main.o: src/main.cc.o

.PHONY : src/main.o

# target to build an object file
src/main.cc.o:
	$(MAKE) -f CMakeFiles/Enigma.dir/build.make CMakeFiles/Enigma.dir/src/main.cc.o
.PHONY : src/main.cc.o

src/main.i: src/main.cc.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cc.i:
	$(MAKE) -f CMakeFiles/Enigma.dir/build.make CMakeFiles/Enigma.dir/src/main.cc.i
.PHONY : src/main.cc.i

src/main.s: src/main.cc.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cc.s:
	$(MAKE) -f CMakeFiles/Enigma.dir/build.make CMakeFiles/Enigma.dir/src/main.cc.s
.PHONY : src/main.cc.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... Enigma"
	@echo "... edit_cache"
	@echo "... src/Command.o"
	@echo "... src/Command.i"
	@echo "... src/Command.s"
	@echo "... src/Plugboard.o"
	@echo "... src/Plugboard.i"
	@echo "... src/Plugboard.s"
	@echo "... src/Rotor.o"
	@echo "... src/Rotor.i"
	@echo "... src/Rotor.s"
	@echo "... src/RotorSystem.o"
	@echo "... src/RotorSystem.i"
	@echo "... src/RotorSystem.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

