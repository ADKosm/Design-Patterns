cmake_minimum_required(VERSION 3.5)
project(ChainOfResponsibility)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Handler.cpp Handler.h Element.cpp Element.h ElementA.cpp ElementA.h ElementB.cpp ElementB.h ElementC.cpp ElementC.h)
add_executable(ChainOfResponsibility ${SOURCE_FILES})