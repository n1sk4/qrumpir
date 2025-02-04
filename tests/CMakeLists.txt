cmake_minimum_required(VERSION 3.20)

project(UnitTests)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)

FetchContent_MakeAvailable(googletest)

file(GLOB TEST_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB GAME_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/../game/states/src/Eat.cpp" ${TEST_SOURCES})
file(GLOB GAME_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/../game/states/src/Sleep.cpp" ${GAME_SOURCES})
file(GLOB GAME_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/../game/states/src/Play.cpp" ${GAME_SOURCES})

add_executable(UnitTests ${GAME_SOURCES})

target_link_libraries(UnitTests PRIVATE QrumpirLib StateMachineLib GTest::gtest GTest::gtest_main)

target_include_directories(
  UnitTests PRIVATE 
  ${CMAKE_CURRENT_SOURCE_DIR}/../game/states/include
)

add_test(NAME TestConcreteStates COMMAND UnitTests)
