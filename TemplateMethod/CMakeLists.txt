cmake_minimum_required(VERSION 3.5)
project(TemplateMethod)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Sender.cpp Sender.h FileSender.cpp FileSender.h NetworkSender.cpp NetworkSender.h)
add_executable(TemplateMethod ${SOURCE_FILES})