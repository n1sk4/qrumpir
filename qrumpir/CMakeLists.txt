cmake_minimum_required(VERSION 3.20)

project(QrumpirLib)

file(GLOB QRUMPIR_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
file(GLOB QRUMPIR_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/*.hpp")

add_library(QrumpirLib ${QRUMPIR_SOURCES} ${QRUMPIR_HEADERS})

target_include_directories(QrumpirLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)