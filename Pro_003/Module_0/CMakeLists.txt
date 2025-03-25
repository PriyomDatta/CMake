# Specify the minimum CMake version
cmake_minimum_required(VERSION 3.10)

# Set the project name for the module
project(Module_0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files for the module
set(MODULE_0_SOURCES
    src/Mod_0.cpp
)

# Add the library target for the module
add_library(Module_0_lib ${MODULE_0_SOURCES})

# Include directories if there are headers specific to the module
target_include_directories(Module_0_lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")

# Link any dependencies, if required (you can remove this if there are none)
# Example: target_link_libraries(Module_0_lib PUBLIC dependency_lib)
