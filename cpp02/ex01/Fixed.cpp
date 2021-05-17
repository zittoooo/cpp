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

Fixed::Fixed(int const raw)
{
    std::cout << "Int constructor called\n";
    this->fixedPoint = raw << this->fract;
}

Fixed::Fixed(float const raw)
{
    std::cout << "Float constructor called\n";
    this->fixedPoint = roundf(raw * (1 << this->fract));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    std::cout << "Assignation operator called\n";
    this->fixedPoint = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called\n";
    return (this->fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called\n";
    this->fixedPoint = raw;
}

float Fixed::toFloat(void) const
{
    float fpoint = (float)this->fixedPoint;
    fpoint = fpoint / (1 << this->fract);
    return (fpoint);
}

int Fixed::toInt(void) const
{
    int ipoint = this->fixedPoint >> this->fract;
    return (ipoint);
}

std::ostream& operator<<(std::ostream& stm, const Fixed& fixed)
{
    stm << fixed.toFloat();
    return (stm);
}