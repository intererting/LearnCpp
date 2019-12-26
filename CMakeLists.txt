cmake_minimum_required(VERSION 3.15)
project(LearnCpp)

set(CMAKE_CXX_STANDARD 11)

add_executable(LearnCpp main.cpp code/Human.h code/utils.cpp code/utils.h)