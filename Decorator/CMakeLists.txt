cmake_minimum_required(VERSION 3.5)
project(Decorator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Component.h TextPrinter.cpp TextPrinter.h Worker.cpp Worker.h Decorator.h Decorator.cpp StarBorderedDecorator.cpp StarBorderedDecorator.h)
add_executable(Decorator ${SOURCE_FILES})