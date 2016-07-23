cmake_minimum_required(VERSION 3.5)
project(Bridge)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Painter.cpp Painter.h Graphics.h StreamsGraphics.cpp StreamsGraphics.h StringsGraphics.cpp StringsGraphics.h HousePainter.cpp HousePainter.h Graphics.cpp)
add_executable(Bridge ${SOURCE_FILES})