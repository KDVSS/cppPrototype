project(unit_test)

set(HEADER_FILES
        banking_application.h
        ../Google_tests/banking_application_mock.h
        employee_management.h
)

set(SOURCE_FILES
        banking_application.cpp
        employee_management.cpp
)

add_library(prototype_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})