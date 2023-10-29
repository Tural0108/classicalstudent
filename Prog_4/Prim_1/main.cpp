#include "temp_calc.h"

//cmake -G  "MinGW Makefiles" ../

int main(){

    std::cout << "hello world!!!\n";
    My_calc num1, num2, num3;
    double a,b;
    int c,d;
    char e=12, f=3;
    std::cin >> a >> b;
    std::cin >> c >> d;
    std::cout << num1.sum(a,b) << "\n";
    std::cout << num1.sub(a,b) << "\n";
    std::cout << num1.mult(a,b) << "\n";
    std::cout << num1.div(a,b) << "\n";
    std::cout << num2.sum(c,d) << "\n";
    std::cout << num2.sub(c,d) << "\n";
    std::cout << num2.mult(c,d) << "\n";
    std::cout << num2.div(c,d) << std::endl;
    std::cout << static_cast<double>(num3.sum(e,f)) << std::endl;
    std::cout << static_cast<double>(num3.sub(e,f)) << std::endl;
    std::cout << static_cast<double>(num3.mult(e,f)) << std::endl;
    std::cout << static_cast<double>(num3.div(e,f)) << std::endl;

    return 0;
}