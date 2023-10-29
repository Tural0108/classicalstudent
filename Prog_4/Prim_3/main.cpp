#include "comp.h"

//cmake -G  "MinGW Makefiles" ../

int main(){

    std::cout << "hello world!!!\n";
    std::string s1 = "AB";
    std::string s2 = "BA";
    std::string s3 = "AB";
    Comp <double>num1;Comp <int>num2;Comp <char>num3;Comp <std::string>num4;
    double a=5.2, b=4.0;
    int c=52, d=40;
    char e='a', f='b';


    std::cout << num1.sum(a,b) << "\n";
    std::cout << num1.compare(a,b) << "\n";
    std::cout << num2.sum(c,d) << "\n";
    std::cout << num2.compare(c,d) << "\n";
    std::cout << num3.sum(e,f) << std::endl;
    std::cout << num3.compare(e,f) << std::endl;
    // Сравнение AB и BA
    std::cout << num4.sum(s1,s2) << "\n";
    std::cout << num4.More(s1,s2) << "\n";
    std::cout << num4.Equal(s1,s2) << "\n\n";
    // Сравнение AB и AB
    std::cout << num4.More(s1,s3) << "\n";
    std::cout << num4.Equal(s1,s3) << "\n\n";
    // Сравнение BA и AB
    std::cout << num4.More(s2,s3) << "\n";
    std::cout << num4.Equal(s2,s3) << "\n";
    return 0;
}