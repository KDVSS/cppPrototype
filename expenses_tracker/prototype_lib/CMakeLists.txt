project(expenses_tracker)

set(HEADER_FILES
        expenses_tracker.h)

set(SOURCE_FILES
        expenses_tracker.cpp)

add_library(prototype_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})