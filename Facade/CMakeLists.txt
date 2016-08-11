cmake_minimum_required(VERSION 3.5)
project(Facade)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Coder.cpp Coder.h Decoder.cpp Decoder.h KeyHolder.cpp KeyHolder.h SimpleCrypto.cpp SimpleCrypto.h)
add_executable(Facade ${SOURCE_FILES})