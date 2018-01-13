cmake_minimum_required(VERSION 3.5)

project(mylib)

# Include Boost as an imported target
find_package(Boost REQUIRED)
add_library(boost INTERFACE IMPORTED)
set_property(TARGET boost PROPERTY
    INTERFACE_INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIR})

# Create the main executable
# add the header files also so that the IDE knows they exist
# in the source tree
add_library(mylib_lib
        include/mylib/encoder.h
		include/mylib/config.h
		src/localheader.h
        src/encoder.cpp)

target_link_libraries(mylib_lib boost)

# add the include dir as a public include directory
# will be inherited by dependent targets
target_include_directories(mylib_lib PUBLIC
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
 	$<INSTALL_INTERFACE:include>)

target_include_directories(mylib_lib PRIVATE src)

if(BUILD_SHARED_LIBS)
  target_compile_definitions(mylib_lib PRIVATE MYLIB_EXPORTS)
  target_compile_definitions(mylib_lib INTERFACE MYLIB_IMPORTS)
endif()

## create test for mylib
add_executable(mylib_test tests/mylib_test.cpp)
target_link_libraries(mylib_test mylib_lib)
add_test(mylib_test mylib_test)
