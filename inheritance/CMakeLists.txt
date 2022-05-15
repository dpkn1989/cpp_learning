add_library(inheritance src/inheritance.cpp)

#target_include_directories(my_math PUBLIC include)
target_include_directories(inheritance PUBLIC $<INSTALL_INTERFACE:include>
                                              $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/inheritance/inheritance.h DESTINATION ${CMAKE_INSTALL_PREFIX}/include/inheritance)
install(TARGETS inheritance EXPORT inheritance_export DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/inheritance)
install(EXPORT inheritance_export FILE inheritance-config.cmake DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/inheritance)