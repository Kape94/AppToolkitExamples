cmake_minimum_required(VERSION 3.22)
project(ex2-simpleUI)

file(GLOB SRC_FILES *.cpp)
add_executable(${PROJECT_NAME} ${SRC_FILES})

target_include_directories(${PROJECT_NAME} PUBLIC 
  ../AppToolkit
)
target_link_libraries(${PROJECT_NAME} PUBLIC AppToolkit)
