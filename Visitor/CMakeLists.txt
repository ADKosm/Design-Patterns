cmake_minimum_required(VERSION 3.5)
project(Visitor)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Element.cpp Element.h Visitor.cpp Visitor.h CharElement.cpp CharElement.h NumberElement.cpp NumberElement.h MeanVisitor.cpp MeanVisitor.h LetterStatisticVisitor.cpp LetterStatisticVisitor.h)
add_executable(Visitor ${SOURCE_FILES})