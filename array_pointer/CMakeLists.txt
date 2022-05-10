add_library(array_pointer src/array_pointer.cpp)

#target_include_directories(array_pointer PUBLIC include)
target_include_directories(array_pointer PUBLIC $<INSTALL_INTERFACE:include>
                                                $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/array_pointer/array_pointer.h DESTINATION ${CMAKE_INSTALL_PREFIX}/include/array_pointer)
install(TARGETS array_pointer EXPORT arrayptr_export DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/array_pointer)
install(EXPORT arrayptr_export FILE array_pointer-config.cmake DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/array_pointer)
