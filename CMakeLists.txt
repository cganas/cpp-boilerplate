cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# Project definition
project(myproject)

# Enables cmake testing
enable_testing()

# Internal libraries
add_subdirectory(mylib)

# Application executable and dependencies
add_executable(myapp_exe myapp/main.cpp)
target_link_libraries(myapp_exe mylib_lib)


