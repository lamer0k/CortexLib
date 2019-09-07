cmake_minimum_required(VERSION 3.13)
project(CortexLib)

set(CMAKE_CXX_STANDARD 14)

include_directories(Hal)
include_directories(Hal/Registers)

add_executable(CortexLib
        Hal/Registers/register.hpp
        main.cpp)
