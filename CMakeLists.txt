cmake_minimum_required(VERSION 3.28)
project(c64_kata
        VERSION 0.1.0
        DESCRIPTION "Basic C++ project with Catch2 unit tests"
        LANGUAGES CXX)

find_package(Catch2 REQUIRED)

set(CMAKE_CXX_STANDARD 20)

add_executable(c64_kata main.cpp)

add_executable(tests test.cpp)
target_link_libraries(tests Catch2::Catch2WithMain)
