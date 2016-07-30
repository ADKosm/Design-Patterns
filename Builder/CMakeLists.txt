cmake_minimum_required(VERSION 3.5)
project(Painter)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Picture.cpp Picture.h Painter.cpp Painter.h RealPainter.cpp RealPainter.h StatPainter.cpp StatPainter.h)
add_executable(Painter ${SOURCE_FILES})