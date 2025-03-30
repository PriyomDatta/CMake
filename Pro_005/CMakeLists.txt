cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Proj_002)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Adding a configuration file
configure_file(Versionconfig.h.in Versionconfig.h)

# Include directories
include_directories(
    ${CMAKE_SOURCE_DIR}/inc
)

# Source files for the main executable
file(GLOB_RECURSE MAIN_SOURCES
    ${CMAKE_SOURCE_DIR}/src/*.cpp
)

# Add main executable
add_executable(mainexe ${MAIN_SOURCES})
set_target_properties(mainexe PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Include Google Test
add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Source files for the test executable
file(GLOB_RECURSE TEST_SOURCES
    ${CMAKE_SOURCE_DIR}/test/*.cpp
)

# Add test executable
add_executable(testexe ${TEST_SOURCES})
set_target_properties(testexe PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/tests)
target_link_libraries(testexe gtest gtest_main)
