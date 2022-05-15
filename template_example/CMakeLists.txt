add_library(template_example src/template_example.cpp)

#target_include_directories(my_math PUBLIC include)
target_include_directories(template_example PUBLIC $<INSTALL_INTERFACE:include>
                                                   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/template_example/template_example.h DESTINATION ${CMAKE_INSTALL_PREFIX}/include/template_example)
install(TARGETS template_example EXPORT templateexample_export DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/template_example)
install(EXPORT templateexample_export FILE template_example-config.cmake DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/template_example)