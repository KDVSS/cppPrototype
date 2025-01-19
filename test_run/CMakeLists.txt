cmake_minimum_required(VERSION 3.30)
project(test_run)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES main.cpp)
add_executable(test_run_run ${SOURCE_FILES})

include_directories(test_run_lib)
add_subdirectory(test_run_lib)

target_link_libraries(test_run_run test_run_lib)

add_subdirectory(Google_tests)
