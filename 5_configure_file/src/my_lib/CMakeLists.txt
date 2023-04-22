add_library(${LIBRARY_NAME} STATIC my_lib.cpp)
target_include_directories(${LIBRARY_NAME} PUBLIC 
"./"
"${CMAKE_BUILD_DIR}/configured_files/include")