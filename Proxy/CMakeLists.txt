cmake_minimum_required(VERSION 3.5)
project(Proxy)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Element.cpp Element.h TextElement.cpp TextElement.h TextProxy.cpp TextProxy.h)
add_executable(Proxy ${SOURCE_FILES})