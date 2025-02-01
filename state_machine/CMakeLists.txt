cmake_minimum_required(VERSION 3.20)

project(StateMachineLib)

file(GLOB STATE_MACHINE_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_library(StateMachineLib ${STATE_MACHINE_SOURCES})

target_include_directories(StateMachineLib PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/qrumpir/include
)

target_link_libraries(StateMachineLib PUBLIC QrumpirLib)
