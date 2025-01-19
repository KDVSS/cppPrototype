project(test_run)

set(HEADER_FILES
        math_operations.h
        banking_application.h
)

set(SOURCE_FILES
        math_operation.cpp
        banking_application.cpp
)

add_library(test_run_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})