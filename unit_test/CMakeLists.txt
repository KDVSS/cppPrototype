cmake_minimum_required(VERSION 3.30)
project(unit_test)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES main.cpp)
add_executable(unit_test ${SOURCE_FILES})

include_directories(prototype_lib)
add_subdirectory(prototype_lib)

target_link_libraries(unit_test prototype_lib)

add_subdirectory(Google_tests)
