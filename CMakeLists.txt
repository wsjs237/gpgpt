cmake_minimum_required(VERSION 3.10)
project(Calculator)

set(CMAKE_CXX_STANDARD 14)

# Add source files
include_directories(include)
add_executable(calculator_test test/calculator_test.cpp src/calculator.cpp)

# Link Google Test
find_package(GTest REQUIRED)
target_link_libraries(calculator_test GTest::GTest GTest::Main)