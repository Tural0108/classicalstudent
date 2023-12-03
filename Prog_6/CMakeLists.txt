cmake_minimum_required(VERSION 3.5.0)

set(SOURCES
       
    ./src/Sort.h
   
    )

include_directories(
    ./src/
    )
add_executable(Prog_5 ./main.cpp ${SOURCES})