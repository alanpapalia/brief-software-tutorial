cmake_minimum_required(VERSION 3.2)
project(
  short_tutorial
  VERSION 0.0.0
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE DEBUG)
endif()

find_package(glog REQUIRED)

add_executable(main src/main.cpp)
target_link_libraries(main glog::glog)
target_include_directories(main PUBLIC ${GLOG_INCLUDE_DIRS})
