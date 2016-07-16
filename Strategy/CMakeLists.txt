cmake_minimum_required(VERSION 3.5)
project(Strategy)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp EstimateStrategy.h Estimator.cpp Estimator.h EstimateByMax.cpp EstimateByMax.h EstimateByMinMax.cpp EstimateByMinMax.h EstimateByMean.cpp EstimateByMean.h)
add_executable(Strategy ${SOURCE_FILES})