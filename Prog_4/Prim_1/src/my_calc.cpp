#include "my_calc.h"

My_calc::My_calc()
{

}

My_calc::~My_calc()
{

}

int My_calc::sum(int a, int b){
    return a+b;
}

int My_calc::sub(int a, int b){
    return a-b;
}

int My_calc::mult(int a, int b){
    return a*b;
}

int My_calc::div(int a, int b){
    return a/b;
}

double My_calc::sum_d(double a, double b){
    return a+b;
}

double My_calc::sub_d(double a, double b){
    return a-b;
}

double My_calc::mult_d(double a, double b){
    return a*b;
}

double My_calc::div_d(double a, double b){
    return a/b;
}

double My_calc::sum_c(char a,char b){
    return a+b;
}

double My_calc::mult_c(char a,char b){
    return a*b;
}

double My_calc::sub_c(char a,char b){
    return a-b;
}

double My_calc::div_c(char a,char b){
    return a/b;
}
