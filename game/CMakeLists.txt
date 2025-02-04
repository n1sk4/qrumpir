cmake_minimum_required(VERSION 3.20)

project(Game)

file(GLOB GAME_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
file(GLOB GAME_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/states/src/*.cpp" ${GAME_SOURCES})

add_executable(Game ${GAME_SOURCES})

target_include_directories(Game PRIVATE 
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  ${CMAKE_CURRENT_SOURCE_DIR}/states/include
  ${PROJECT_SOURCE_DIR}/qrumpir/include
  ${PROJECT_SOURCE_DIR}/state_machine/include
)

target_link_libraries(Game PRIVATE QrumpirLib StateMachineLib)
