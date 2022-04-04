cmake_minimum_required(VERSION 3.21)
project(PPIII_D05)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(PPIII_D05
        Prueba_POO_Fecha/Prueba_POO_Fecha.cpp
        Fecha.cpp
        Fecha.h)
