#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->fixedPoint = 0;
}

Fixed::Fixed(const Fixed& fixed)
{
    std::cout << "Copy constructor called\n";
    // this->fixedPoint = fixed.getRawBits();
    *this = fixed;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}
Fixed& Fixed::operator = (const Fixed& fixed)
{
    std::cout << "Assignation operator called\n";
    this->fixedPoint = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return (this->fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    this->fixedPoint = raw;
}