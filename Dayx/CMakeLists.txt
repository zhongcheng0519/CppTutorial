cmake_minimum_required(VERSION 3.0)

project(liangxq_test C)

add_subdirectory(lib)

set(the_target "demo")
aux_source_directory(. SOURCE_LIST)
add_executable(${the_target} ${SOURCE_LIST})
add_dependencies(${the_target} "liangxq")
target_link_libraries(${the_target} "liangxq")

