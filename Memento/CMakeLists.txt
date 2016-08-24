cmake_minimum_required(VERSION 3.5)
project(Memento)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Person.cpp Person.h PersonMemento.cpp PersonMemento.h)
add_executable(Memento ${SOURCE_FILES})