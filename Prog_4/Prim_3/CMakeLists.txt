cmake_minimum_required(VERSION 3.5.0)
project(Prim_3)

set(SOURCES
       
    ./src/comp.h

    )

include_directories(
    ./src/
    )
add_executable(Prim_3 ./main.cpp ${SOURCES})