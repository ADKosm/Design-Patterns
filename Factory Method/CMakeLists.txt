cmake_minimum_required(VERSION 3.5)
project(Factory_Method)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Application.cpp Application.h Dialog.cpp Dialog.h KindDialog.cpp KindDialog.h EvilDialog.cpp EvilDialog.h EvilApplication.cpp EvilApplication.h KindApplication.cpp KindApplication.h)
add_executable(Factory_Method ${SOURCE_FILES})