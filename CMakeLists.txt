cmake_minimum_required(VERSION 3.0.0)
project(hello)

include(CTest)
enable_testing()

find_package(Curses REQUIRED)

add_executable(hello main.cpp)
target_link_libraries(hello ${CURSES_LIBRARIES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
