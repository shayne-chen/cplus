cmake_minimum_required (VERSION 2.6)

set(CMAKE_CXX_STANDARD 11)

project (exercise)

set(SRC_ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

#file(GLOB CXX_FILES_IN_SRC "${SRC_ROOT_PATH}/src/*.cc")
file(GLOB CXX_FILES_IN_SRC 
    ${SRC_ROOT_PATH}/src/str.cc
    ${SRC_ROOT_PATH}/src/files.cc
    ${SRC_ROOT_PATH}/src/main.cc
)

set(
        SOURCE_FILES
        ${CXX_FILES_IN_SRC}
)

include_directories(${SRC_ROOT_PATH}/src/)

add_executable(run ${SOURCE_FILES})
