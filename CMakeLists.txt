cmake_minimum_required(VERSION 3.29)
project(KaoYan)

set(CMAKE_CXX_STANDARD 20)
include_directories(
        Struct/headers
)
add_executable(KaoYan main.cpp
        Struct/BiTree.cpp
        Struct/Stack.impl.h
        Struct/List.cpp
)
