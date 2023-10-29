#ifndef TEMP_CALC_H
#define TEMP_CALC_H

#include <iostream>

class My_calc{
    public:
        template<typename T> T sum(T& a, T& b){
            return a+b;
        }
        template<typename T> T sub(T& a, T& b){
            return a-b;
        }
        template<typename T> T mult(T& a, T& b){
            return a*b;
        }
        template<typename T> T div(T& a, T& b){
            return a/b;
        }       
};

#endif