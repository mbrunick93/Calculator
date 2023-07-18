cmake_minimum_required(VERSION 3.20.2)

project(${This} C CXX)

set(This Calculator)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0 glibmm-2.4)

include_directories(    ${GTKMM_INCLUDE_DIRS} 
                        ${CMAKE_SOURCE_DIR}/CalculatorCompute
                        ${CMAKE_SOURCE_DIR}/CalculatorSignal
)
link_directories(${GTKMM_LIBRARY_DIRS})


#libraries
add_subdirectory(CalculatorCompute)
add_subdirectory(CalculatorSignal)

add_executable(${This})
target_sources(${This} PRIVATE main.cpp)
target_link_libraries(${This} PUBLIC ${GTKMM_LIBRARIES} CalcSignal CalcCompute )

set_target_properties(${This} PROPERTIES
                      RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)




