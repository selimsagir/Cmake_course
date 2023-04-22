set(LIB_SOURCES
    "my_lib.cpp")
set(LIB_HEADERS
      "my_lib.h")

add_library(${LIBRARY_NAME} STATIC
                             ${LIB_SOURCES}
                             ${LIB_HEADERS})
target_include_directories(${LIBRARY_NAME} PUBLIC 
"./"
"${CMAKE_BUILD_DIR}/configured_files/include")