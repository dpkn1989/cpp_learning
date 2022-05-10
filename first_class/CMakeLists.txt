add_library(first_class src/first_class.cpp)

#target_include_directories(my_math PUBLIC include)
target_include_directories(first_class PUBLIC $<INSTALL_INTERFACE:include>
                                              $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/first_class/first_class.h DESTINATION ${CMAKE_INSTALL_PREFIX}/include/first_class)
install(TARGETS first_class EXPORT firstclass_export DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/first_class)
install(EXPORT firstclass_export FILE first_class-config.cmake DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/first_class)