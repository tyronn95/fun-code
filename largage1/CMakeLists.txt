cmake_minimum_required(VERSION 3.29)
project(malloc_world C)

set(CMAKE_C_STANDARD 11)

add_executable(malloc_world main.c
        generateMap.h
        generateMap.c
        tab2D.h
        tab2D.c)
