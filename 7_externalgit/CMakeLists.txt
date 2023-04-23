cmake_minimum_required( VERSION 3.22)

project(CProject VERSION 1.0.0 LANGUAGES C CXX)


#set(CMAKE_C_STANDARD 99)
#set(CMAKE_C_STANDARD_REQUIRED ON)
#set(CMAKE_C_EXTENSIONS ON)
set(CMAKE_CXX_STANDARD 17)
set(LIBRARY_NAME Library)
set(EXECUTABLE_NAME Executable)

#option(COMPILE_EXECUTABLE "Whether to compile the executable" ON)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")
include(AddGitSubmodule)
add_git_submodule(external/json)


add_subdirectory(configured)
add_subdirectory(external)
add_subdirectory(src)
add_subdirectory(app)

#if (COMPILE_EXECUTABLE)
#else()
#    message("W/o exe. compiling")
#endif()    