cmake_minimum_required(VERSION 3.5)
project(Command)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Picture.cpp Picture.h Command.h PrintCommand.cpp PrintCommand.h NewLineCommand.cpp NewLineCommand.h Button.cpp Button.h Menu.cpp Menu.h)
add_executable(Command ${SOURCE_FILES})