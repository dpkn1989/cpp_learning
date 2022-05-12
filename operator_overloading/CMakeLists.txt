add_library(operator_overloading src/operator_overloading.cpp)

#target_include_directories(my_math PUBLIC include)
target_include_directories(operator_overloading PUBLIC $<INSTALL_INTERFACE:include>
                                                       $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/operator_overloading/operator_overloading.h DESTINATION ${CMAKE_INSTALL_PREFIX}/include/operator_overloading)
install(TARGETS operator_overloading EXPORT opoverload_export DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/operator_overloading)
install(EXPORT opoverload_export FILE operator_overloading-config.cmake DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/operator_overloading)