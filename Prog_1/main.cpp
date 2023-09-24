#include <iostream>

#include <RedSquare.h>
#include <Circle.h>
#include <Triangle.h>
#include <Rectangle.h>

int main()
{
    RedSquare bigSquare;
    bigSquare.addShape( new Circle(3));
    bigSquare.addShape(new TriAngle(4,5));
    bigSquare.addShape(new Rectangle(3,3));
    std::cout<< bigSquare.calcSquare()<<std::endl;
    return 0;

}
