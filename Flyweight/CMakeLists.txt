cmake_minimum_required(VERSION 3.5)
project(Flyweight)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Character.cpp Character.h CharacterFactory.cpp CharacterFactory.h)
add_executable(Flyweight ${SOURCE_FILES})