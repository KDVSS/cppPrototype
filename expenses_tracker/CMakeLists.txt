cmake_minimum_required(VERSION 3.30)
project(expenses_tracker)

set(CMAKE_CXX_STANDARD 20)

add_executable(expenses_tracker main.cpp
        prototype_lib/expenses_tracker.cpp
        prototype_lib/expenses_tracker.h)
include_directories(prototype_lib)
add_subdirectory(prototype_lib)

target_link_libraries(expenses_tracker prototype_lib)