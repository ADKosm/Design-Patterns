cmake_minimum_required(VERSION 3.5)
project(ShapeFactory)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Shape.h Rect.cpp Rect.h HashtagRect.cpp HashtagRect.h NumeralRect.cpp NumeralRect.h Round.cpp Round.h HashtagRound.cpp HashtagRound.h NumeralRound.cpp NumeralRound.h ShapeFactory.h HashtagFactory.cpp HashtagFactory.h NumeralFactory.cpp NumeralFactory.h)
add_executable(ShapeFactory ${SOURCE_FILES})