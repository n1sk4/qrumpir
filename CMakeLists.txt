cmake_minimum_required(VERSION 3.20)

project(Qrumpir)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

add_subdirectory(qrumpir)
add_subdirectory(state_machine)
add_subdirectory(tests)