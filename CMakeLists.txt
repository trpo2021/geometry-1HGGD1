cmake_minimum_required(VERSION 3.2...3.16)

project(GeometryaMOIA)

set(CMAKE_CXX_STANDARD 17)
add_library(Lib_Geom_rary lib/Library.cpp lib/Library.h)

#GeometryaMOIA main executable
add_executable(GeometryaMOIA GeometryaMOIA.cpp)
target_include_directories(GeometryaMOIA PRIVATE lib)
target_link_libraries(GeometryaMOIA Lib_Geom_rary)
target_compile_options(Lib_Geom_rary PRIVATE -lm)