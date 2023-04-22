set(LIB_SOURCES
    "my_lib.cpp"
     "my_lib.h")


add_library(${LIBRARY_NAME} STATIC ${LIB_SOURCES})
target_include_directories(${LIBRARY_NAME} PUBLIC 
"./"
"${CMAKE_BUILD_DIR}/configured_files/include")