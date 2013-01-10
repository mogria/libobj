cmake_minimum_required(VERSION 2.8)

project(libobj)

file(GLOB_RECURSE LIBOBJ_SOURCE_FILES "src/*.c")
file(GLOB_RECURSE LIBOBJ_TEST_SOURCE_FILES "test/*.c")

set (CMAKE_C_FLAGS "-g -Wall")

include_directories(${PROJECT_BINARY_DIR}/include)
add_library(libobj ${LIBOBJ_SOURCE_FILES})

# FIND_PATH(CHECK_INCLUDE_DIRS check.h)
# FIND_LIBRARY(CHECK_LIBRARIES NAMES check)
# include_directories(${CHECK_INCLUDE_DIRS})

# add_executable(libobj_test ${LIBOBJ_TEST_SOURCE_FILES})
# target_link_libraries(libobj_test libobj ${CHECK_LIBRARIES})

