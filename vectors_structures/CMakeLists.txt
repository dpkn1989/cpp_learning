add_library(vectors_structures src/vectors_structures.cpp)

#target_include_directories(array_pointer PUBLIC include)
target_include_directories(vectors_structures PUBLIC $<INSTALL_INTERFACE:include>
                                                     $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/vectors_structures/vectors_structures.h DESTINATION ${CMAKE_INSTALL_PREFIX}/include/vectors_structures)
install(TARGETS vectors_structures EXPORT vectorstructure_export DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/vectors_structures)
install(EXPORT vectorstructure_export FILE vectors_structures-config.cmake DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/vectors_structures)