cmake_minimum_required(VERSION 3.20)

project(StateMachineLib)

file(GLOB STATE_MACHINE_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
file(GLOB STATE_MACHINE_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/*.hpp")

add_library(StateMachineLib ${STATE_MACHINE_SOURCES} ${STATE_MACHINE_HEADERS})

target_include_directories(StateMachineLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
