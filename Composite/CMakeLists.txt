cmake_minimum_required(VERSION 3.5)
project(Composite)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp component.h Pen.cpp Pen.h Pencil.cpp Pencil.h Penal.cpp Penal.h)
add_executable(Composite ${SOURCE_FILES})