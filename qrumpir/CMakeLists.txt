cmake_minimum_required(VERSION 3.20)

project(QrumpirLib
        VERSION 0.1)

file(GLOB QRUMPIR_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_library(${PROJECT_NAME} ${QRUMPIR_SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/state_machine/include
)

target_link_libraries(${PROJECT_NAME} PUBLIC StateMachineLib)
