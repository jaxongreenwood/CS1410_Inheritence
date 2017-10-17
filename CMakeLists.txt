cmake_minimum_required(VERSION 3.8)
project(Lect8)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp Counter.cpp Counter.h)
set(SOURCE_FILES Distance.cpp testDistance.cpp testDistance.h)
add_executable(Lect8 ${SOURCE_FILES})