cmake_minimum_required(VERSION 3.26)
project(monkeylang)

set(CMAKE_CXX_STANDARD 20)

add_executable(monkeylang main.cpp
        types/monkey-token.h)
