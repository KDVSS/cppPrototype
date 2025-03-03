project(unit_test)

set(HEADER_FILES
        ../Google_tests/banking_application_mock.h
        banking_application.h
        employee_management.h
        expenses_tracker.h
        smart_home.h
        student_info.h
        Tic-Tac-Toe.h
        practice.h
        songs_playlists.h
        ../Google_tests/songs_playlists_mock.h
        practice1.cpp
        practice1.h
)

set(SOURCE_FILES
        banking_application.cpp
        employee_management.cpp
        expenses_tracker.cpp
        smart_home.cpp
        student_info.cpp
        Tic-Tac-Toe.cpp
        practice.cpp
        songs_playlists.cpp
        practice1.cpp
        files.cpp
)

add_library(prototype_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})