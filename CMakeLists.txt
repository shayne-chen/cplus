cmake_minimum_required (VERSION 2.6)

set(CMAKE_CXX_STANDARD 11)

project (exercise)

set(SRC_ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

set(CXX_FILES_IN_SRC 
    ${SRC_ROOT_PATH}/src/str.cc
    ${SRC_ROOT_PATH}/src/files.cc
    ${SRC_ROOT_PATH}/src/stack.cc
    ${SRC_ROOT_PATH}/src/main.cc
)

include_directories(${SRC_ROOT_PATH}/src/)

add_executable(run ${CXX_FILES_IN_SRC})
