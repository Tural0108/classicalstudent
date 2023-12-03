cmake_minimum_required(VERSION 3.5.0)

set(SOURCES
       
    ./src/My_shared_ptr.h
    ./src/my_unique_ptr.h
    ./src/ptr.h
    ./src/weak_ptr.h    
    )

include_directories(
    ./src/
    )
add_executable(Prog_5 ./main.cpp ${SOURCES})