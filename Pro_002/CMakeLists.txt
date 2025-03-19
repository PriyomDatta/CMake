cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Proj_002)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#Include directories
include_directories(
    ${CMAKE_SOURCE_DIR}/inc
)

#Source files
file(GLOB_RECURSE SOURCES
    ${CMAKE_SOURCE_DIR}/src/*.cpp
)

# Add executable
add_executable(mainexe ${SOURCES})
