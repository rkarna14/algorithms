cmake_minimum_required(VERSION 3.8)
project(algorithms)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp algos/InsertionSort.cpp algos/InsertionSort.h)
add_executable(algorithms ${SOURCE_FILES})