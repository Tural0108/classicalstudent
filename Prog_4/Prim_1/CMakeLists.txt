cmake_minimum_required(VERSION 3.5.0)
project(Prim_1)

set(SOURCES
       
    ./src/my_calc.h
    ./src/my_calc.cpp
    ./src/temp_calc.h

    )

include_directories(
    ./src/
    )
add_executable(Prim_1 ./main.cpp ${SOURCES})