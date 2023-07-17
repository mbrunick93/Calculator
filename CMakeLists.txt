cmake_minimum_required(VERSION 3.20.2)

project(${This} C CXX)

set(This TEST_SENDER)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

enable_testing()

#add_subdirectory(googletest)
set(Sources main.cpp)

add_executable(${This})
target_sources(${This} PRIVATE ${Sources})


add_subdirectory(external)