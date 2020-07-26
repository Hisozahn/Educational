cmake_minimum_required(VERSION 3.10)
project(class_sample)

set(CMAKE_CXX_STANDARD 11)

add_executable(class_sample main.cpp base.cpp base.h child.cpp child.h)