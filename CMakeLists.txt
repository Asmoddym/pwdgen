cmake_minimum_required(VERSION 3.8)

set(PROJECT_NAME pwdgen)

set(BUILD_DIRECTORY ${PROJECT_SOURCE_DIR})
set(CMAKE_CXX_FLAGS "-W -Wall -Wextra -g -ggdb3")
set(EXECUTABLE_OUTPUT_PATH ${BUILD_DIRECTORY})

include_directories(./include)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} ${LIBRARIES})
