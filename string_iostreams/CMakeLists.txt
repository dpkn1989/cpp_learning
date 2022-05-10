add_library(string_iostreams src/string_iostreams.cpp)

#target_include_directories(array_pointer PUBLIC include)
target_include_directories(string_iostreams PUBLIC $<INSTALL_INTERFACE:include>
                                                   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/string_iostreams/string_iostreams.h DESTINATION ${CMAKE_INSTALL_PREFIX}/include/string_iostreams)
install(TARGETS string_iostreams EXPORT striostream_export DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/string_iostreams)
install(EXPORT striostream_export FILE string_iostreams-config.cmake DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/string_iostreams)