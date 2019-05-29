cmake_minimum_required(VERSION 3.14)
project(tournament_grid_generator)

set(CMAKE_CXX_STANDARD 14)

find_package(X11 REQUIRED)
link_libraries(${X11_LIBRARIES})
include_directories(${X11_INCLUDE_DIR})

add_executable(${PROJECT_NAME} main.cpp)