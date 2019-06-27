cmake_minimum_required(VERSION 3.12.4)
project(tournament_grid_generator)

set(CMAKE_CXX_STANDARD 17)

find_package(X11 REQUIRED)
link_libraries(${X11_LIBRARIES})
include_directories(${X11_INCLUDE_DIR})

include_directories(src src/include)
file(GLOB SPPS
        "${PROJECT_SOURCE_DIR}/src/include/**/*.h"
        "${PROJECT_SOURCE_DIR}/src/include/*.h"
        "${PROJECT_SOURCE_DIR}/src/**/*.cpp"
        "${PROJECT_SOURCE_DIR}/src/*.cpp"
        )
file(GLOB SPPS_TEST
        "${PROJECT_SOURCE_DIR}/test/include/**/*.h"
        "${PROJECT_SOURCE_DIR}/test/include/*.h"
        "${PROJECT_SOURCE_DIR}/test/**/*.cpp"
        "${PROJECT_SOURCE_DIR}/test/*.cpp"
        )

add_executable(${PROJECT_NAME} ${SPPS} main.cpp)
add_executable(${PROJECT_NAME}_test ${SPPS} ${SPPS_TEST} main_test.cpp)