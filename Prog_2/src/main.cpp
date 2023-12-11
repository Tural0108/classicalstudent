#include <iostream>
#include <string>

#include "Train.hpp"
#include "Wagon.hpp"
#include "TrainMaker.hpp"

using namespace std; //CAN'T STOP ME NOW


int main(int, char**){

    Train tr;
    ConsoleTrain cTrain;
    FileTrain fTrain;
int sw;
    std::cout << "Enter 1 for Console Input, Enter 2 for File Input\n";
    std::cin>> sw;
    switch (sw)
    {
    // выбор через консоль
    case 1:
    //cTrain.setup();
    cTrain.setupWithTypes(std::vector<std::string>{"wood","coal"});

    tr = cTrain.getTrain();

    tr.info();
        break;
    // данные из файла
    case 2:
    fTrain.setup("trainData.txt");

    tr = fTrain.getTrain();

    tr.info();
        break;

    // в случае если не указываешь кол-во вагонов
    default:
    fTrain.setup("trainData.txt");

    tr = fTrain.getTrain();

    tr.info();

        break;
    }
   

    int sz = tr.getSize();

    Train tr1, tr2;
    Wagon* cur;
    for(int i = 0; i < sz; i++)
    {

        cur = tr.at(0);
        tr.pop();
        if(cur->getCargoType() == "coal")
        {
            tr1.push(cur);
        }else{
            tr2.push(cur);
        }

    }

    std::cout << "\ntr1.size = " << tr1.getSize() << std::endl;
    tr1.info();
    std::cout << "tr2.size = " << tr2.getSize() << std::endl;
    tr2.info();



    return 0;
}
