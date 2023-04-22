cmake_minimum_required(VERSION 3.22)

project(CProject VERSION 1.0.0 LANGUAGES C)

add_library(MyLibrary STATIC lib.c)

add_executable(Executable main.c)

target_link_libraries(Executable PUBLIC MyLibrary)