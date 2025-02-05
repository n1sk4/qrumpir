cmake_minimum_required(VERSION 3.20)

project(UnitTests
        VERSION 0.1)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)

FetchContent_MakeAvailable(googletest)

file(GLOB TEST_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

add_executable(${PROJECT_NAME} ${TEST_SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE QrumpirLib StateMachineLib GTest::gtest GTest::gtest_main)

target_include_directories(
  ${PROJECT_NAME} PRIVATE 
)

add_test(NAME TestConcreteStates COMMAND ${PROJECT_NAME})
