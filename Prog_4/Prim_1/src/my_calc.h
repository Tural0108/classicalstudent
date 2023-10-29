#ifndef MY_CALC_H
#define MY_CALC_H

#include <iostream>

class My_calc{
    public:
        My_calc();
        ~My_calc();

        int sum(int a, int b);
        int mult(int a, int b);
        int sub(int a, int b);
        int div(int a, int b);
        double sum_d(double a, double b);
        double mult_d(double a, double b);
        double sub_d(double a, double b);
        double div_d(double a, double b);
        double sum_c(char a,char b);
        double mult_c(char a,char b);
        double sub_c(char a,char b);
        double div_c(char a,char b);
        
};

#endif