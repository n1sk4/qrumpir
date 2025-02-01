cmake_minimum_required(VERSION 3.20)

project(QrumpirLib)

file(GLOB QRUMPIR_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_library(QrumpirLib ${QRUMPIR_SOURCES})

target_include_directories(QrumpirLib PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/state_machine/include
)

target_link_libraries(QrumpirLib PUBLIC StateMachineLib)
