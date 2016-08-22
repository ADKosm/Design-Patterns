cmake_minimum_required(VERSION 3.5)
project(Mediator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp WoodTool.cpp WoodTool.h Mediator.cpp Mediator.h Tree.cpp Tree.h Axe.cpp Axe.h Watering.cpp Watering.h)
add_executable(Mediator ${SOURCE_FILES})