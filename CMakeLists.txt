cmake_minimum_required(VERSION 3.22.1)

project(RamaChandra VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 14)

add_library(my_math my_math.cpp)

add_executable(rama main.cpp)

target_link_libraries(rama PUBLIC my_math)

