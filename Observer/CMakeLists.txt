cmake_minimum_required(VERSION 3.5)
project(Observer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Observer.cpp Observer.h Subject.cpp Subject.h Timer.cpp Timer.h ClockDisplay.cpp ClockDisplay.h Line.cpp Line.h)
add_executable(Observer ${SOURCE_FILES})