cmake_minimum_required(VERSION 3.22.1)

project(RamaChandra VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(my_math)
add_executable(rama main.cpp)

target_link_libraries(rama PUBLIC my_math)

