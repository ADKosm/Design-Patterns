cmake_minimum_required(VERSION 3.5)
project(State)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Connection.cpp Connection.h ConnectionState.cpp ConnectionState.h OpenState.cpp OpenState.h CloseState.cpp CloseState.h)
add_executable(State ${SOURCE_FILES})