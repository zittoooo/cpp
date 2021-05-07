#include "Brain.hpp"

Brain::Brain() {

    std::stringstream address;

    address << this;
    this->address = address.str();
    this->address[1] = 'x';
    for (int i = 2; i < this->address.length() ; i++)
    {
       this->address[i] = std::toupper(this->address[i]);
    }
}

Brain::~Brain() {}

std::string Brain::identify()
{
    return this->address;
}