cmake_minimum_required(VERSION 3.22.1)

project(RamaChandra VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_BUILD_TYPE Debug)
#set(CMAKE_BUILD_TYPE RelWithDebInfo)

add_subdirectory(my_math)
add_subdirectory(array_pointer)
add_subdirectory(string_iostreams)
add_subdirectory(file_stream)
add_subdirectory(vectors_structures)
add_subdirectory(first_class)
add_subdirectory(operator_overloading)
add_subdirectory(template_example)
add_subdirectory(inheritance)

add_executable(rama main.cpp)

target_link_libraries(rama PUBLIC my_math
                                  array_pointer
                                  string_iostreams
                                  file_stream
                                  vectors_structures
                                  first_class
                                  operator_overloading
                                  template_example
                                  inheritance)

