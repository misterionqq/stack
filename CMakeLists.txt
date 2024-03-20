cmake_minimum_required(VERSION 3.26)
project(longArithmetic LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(test tests/testsForStack.cpp)

add_custom_target(runtest COMMAND test)
