#include "Wagon.hpp"


Wagon::Wagon()
{
    this->next = nullptr;
};

Wagon::Wagon(std::string type, int ind) : _cargoType(type), _cargoIndex(ind), next(nullptr)
{
}

Wagon::~Wagon() 
{
}

std::string Wagon::getCargoType()const
{
    return this->_cargoType;
}

void Wagon::setCargoType(std::string const str)
{
    this->_cargoType = str;
}

int Wagon::getCargoIndex()const
{
    return this->_cargoIndex;
}

void Wagon::setCargoIndex(int const in)
{
    this->_cargoIndex = in;
}