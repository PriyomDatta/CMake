cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Proj_003)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#Adding a configuration file
configure_file(Versionconfig.h.in Version.h)

#Add subdirectory, this will look for seperate CMake under that file
add_subdirectory(Module_0)
list(APPEND_EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/Module_0")

#Add executable
add_executable(Mainexe src/main.cpp)
traget_link