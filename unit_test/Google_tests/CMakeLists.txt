project(Google_tests)
add_subdirectory(lib)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
# adding the Google_Tests_run target
add_executable(Google_Tests_run banking_application_test.cpp)

target_link_libraries(Google_Tests_run gtest gmock gtest_main gmock_main)

# linking Google_Tests_run with prototype_lib which will be tested
target_link_libraries(Google_Tests_run prototype_lib)