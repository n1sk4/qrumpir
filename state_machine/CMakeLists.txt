cmake_minimum_required(VERSION 3.20)

project(StateMachineLib
        VERSION 0.1)

file(GLOB STATE_MACHINE_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_library(${PROJECT_NAME} ${STATE_MACHINE_SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/qrumpir/include
)

target_link_libraries(${PROJECT_NAME} PUBLIC QrumpirLib)
