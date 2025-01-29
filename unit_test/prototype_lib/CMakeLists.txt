project(unit_test)

set(HEADER_FILES
        ../Google_tests/banking_application_mock.h
        banking_application.h
        employee_management.h
        expenses_tracker.h
        smart_home.h
)

set(SOURCE_FILES
        banking_application.cpp
        employee_management.cpp
        expenses_tracker.cpp
        smart_home.cpp
)

add_library(prototype_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})