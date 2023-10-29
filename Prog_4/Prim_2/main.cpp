#include "my_vector.h"

int main()
{
    Vector <int>iv;
    Vector <double>dv(5);
    Vector <char>cv;
    std::cout << "Double vector:\n";
    dv.print();
	dv.resize(10);
    dv.print();
    dv.push_back(5.2);
	dv.print();
    dv.pop_back();
    dv.print();

    std::cout << "Int vector:\n";
    iv.resize(10);
    iv.print();
    iv.push_back(52);
	iv.print();
    std::cout<< iv[10] << "\n";
    iv.print();
    iv.pop_back();
    iv.print();

    std::cout << "Char vector:\n";
    cv.resize(1);
    cv.print();
    cv.push_back('f');
	cv.print();
    cv.push_back(102);
    cv.print();
    cv.pop_back();
    cv.print();
    return 0;
}
