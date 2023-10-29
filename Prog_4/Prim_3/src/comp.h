#ifndef COMP_H
#define COMP_H
#include <iostream>
#include <math.h>
template<typename T> 
class Comp{
    public:
        Comp() {};
        ~Comp() {};

        T sum(T& a, T& b){
            return a+b;
        }

        T compare(T& a, T& b){
            if (a > b)
                return a;
            else
                return b;
            }
    bool More(std::string a,std::string b);
    bool Less(std::string a,std::string b);
    bool Equal(std::string a,std::string b);
    int SumCharStr(std::string str);
};

    template<> int Comp<std::string>::SumCharStr(std::string str)
{
    int sum=0;
    for(int i=0;i<str.length();i++)
    {
        sum=sum+str[i]*pow(10,str.length()-i-1);
    }
    return sum;
}

template <> bool Comp<std::string>::More(std::string a,std::string b)
{
    bool res = true;
    if (a.length()!=b.length())
    {
          if (a.length()<b.length()) res =false;
    } else
    {
        if(SumCharStr(a)<SumCharStr(b)) res =false;
    }
    return res;
}

template <> bool Comp<std::string>::Equal(std::string a,std::string b)
{
    bool res = true;
    if (SumCharStr(a)!= SumCharStr(b))
    {
        res =false;
    }
    return res;
}
#endif