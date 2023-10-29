cmake_minimum_required(VERSION 3.5.0)

set(SOURCES

    ./src/my_vector.h
    
    )

include_directories(
    ./src/
    )
add_executable(Prim_2 ./main.cpp ${SOURCES})
