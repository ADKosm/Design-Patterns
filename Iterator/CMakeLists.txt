cmake_minimum_required(VERSION 3.5)
project(Iterator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp List.cpp List.h ListIterator.cpp ListIterator.h)
add_executable(Iterator ${SOURCE_FILES})