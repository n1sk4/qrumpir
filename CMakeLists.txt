cmake_minimum_required(VERSION 3.10)

project(Qrumpir)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(
  ${PROJECT_SOURCE_DIR}/qrumpir/include
  ${PROJECT_SOURCE_DIR}/state_machine/include
)

file(GLOB QRUMPIR_SOURCES "${PROJECT_SOURCE_DIR}/qrumpir/src/*.cpp")
file(GLOB QRUMPIR_HEADERS "${PROJECT_SOURCE_DIR}/qrumpir/include/*.hpp")

file(GLOB STATE_MACHINE_SOURCES "${PROJECT_SOURCE_DIR}/state_machine/src/*.cpp")
file(GLOB STATE_MACHINE_HEADERS "${PROJECT_SOURCE_DIR}/state_machine/include/*.hpp")

file(GLOB TEST_SOURCES "${PROJECT_SOURCE_DIR}/tests/*.cpp")

add_executable(
  ${PROJECT_NAME}
  ${QRUMPIR_SOURCES} 
  ${QRUMPIR_HEADERS} 
  ${STATE_MACHINE_SOURCES} 
  ${STATE_MACHINE_HEADERS}
)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)

FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(UnitTests ${TEST_SOURCES})
target_link_libraries(UnitTests PRIVATE GTest::gtest GTest::gtest_main)