cmake_minimum_required(VERSION 3.2)
project(Enigma)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_executable(Enigma
    src/main.cc
    src/Command.cc
    src/Rotor.cc
    src/RotorSystem.cc
    src/Plugboard.cc
)