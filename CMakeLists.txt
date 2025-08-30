cmake_minimum_required(VERSION 4.0)
project(AnalizadorCalificaciones)

set(CMAKE_CXX_STANDARD 20)

add_executable(AnalizadorCalificaciones main.cpp
        calificaciones_utils.h
        calificaciones_utils.cpp)
