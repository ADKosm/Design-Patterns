cmake_minimum_required(VERSION 3.5)
project(Prototype)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Flower.cpp Flower.h Flowerbed.cpp Flowerbed.h)
add_executable(Prototype ${SOURCE_FILES})