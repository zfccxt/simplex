cmake_minimum_required(VERSION 3.4)
project(simplex)

add_library(${PROJECT_NAME} src/simplex.h src/simplex.c)

set_property(TARGET ${PROJECT_NAME} PROPERTY C_STANDARD 90)

target_include_directories(${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src)
