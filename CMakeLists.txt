cmake_minimum_required (VERSION 2.6)

set(CMAKE_CXX_STANDARD 11)

project (exercise)

set(SRC_ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${SRC_ROOT_PATH}/src)

include_directories(${SRC_ROOT_PATH}/third_party/gtest/include)

set(CXX_FILES_IN_SRC 
    ${SRC_ROOT_PATH}/src/str.cc
    ${SRC_ROOT_PATH}/src/files.cc
    ${SRC_ROOT_PATH}/src/stack.cc
    ${SRC_ROOT_PATH}/src/main.cc
)

add_executable(run ${CXX_FILES_IN_SRC})

set(UNIT_TEST_SRC
    ${SRC_ROOT_PATH}/src/str.cc
    ${SRC_ROOT_PATH}/src/files.cc
    ${SRC_ROOT_PATH}/src/str_test.cc
    ${SRC_ROOT_PATH}/src/files_test.cc
    ${SRC_ROOT_PATH}/src/test_main.cc
)

add_executable(test ${UNIT_TEST_SRC})
target_link_libraries(test gtest pthread)
