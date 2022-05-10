add_library(file_stream src/file_stream.cpp)

#target_include_directories(array_pointer PUBLIC include)
target_include_directories(file_stream PUBLIC $<INSTALL_INTERFACE:include>
                                              $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/file_stream/file_stream.h DESTINATION ${CMAKE_INSTALL_PREFIX}/include/file_stream)
install(TARGETS file_stream EXPORT filestream_export DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/file_stream)
install(EXPORT filestream_export FILE file_stream-config.cmake DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/file_stream)