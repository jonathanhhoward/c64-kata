cmake_minimum_required(VERSION 3.28)
project(c64_kata
        VERSION 0.1.0
        DESCRIPTION "Commodore 64 kata"
        LANGUAGES CXX)

find_package(Catch2 REQUIRED)

set(CMAKE_CXX_STANDARD 20)

add_executable(c64_kata main.cpp
        C64/Interpreter.cpp
        C64/Interpreter.hpp
        C64/Input.hpp
        C64/Output.hpp)

add_executable(tests test_interpreter.cpp
        C64/Interpreter.cpp
        C64/Interpreter.hpp
        C64/Input.hpp
        C64/Output.hpp)
target_link_libraries(tests Catch2::Catch2WithMain)
