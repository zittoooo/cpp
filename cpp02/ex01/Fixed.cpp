#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    fixedPoint = 0;
}

Fixed::Fixed(const Fixed& fixed)
{
    std::cout << "Copy constructor called\n";
    // fixedPoint = fixed.getRawBits();
    *this = fixed;
}

Fixed::Fixed(int const raw)
{
    std::cout << "Int constructor called\n";
    fixedPoint = raw << fract;
}

Fixed::Fixed(float const raw)
{
    std::cout << "Float constructor called\n";
    fixedPoint = roundf(raw * (1 << fract));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    std::cout << "Assignation operator called\n";
    fixedPoint = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
    fixedPoint = raw;
}

float Fixed::toFloat(void) const
{
    float fpoint = (float)fixedPoint;
    fpoint = fpoint / (1 << fract);
    return (fpoint);
}

int Fixed::toInt(void) const
{
    int ipoint = fixedPoint >> fract;
    return (ipoint);
}

std::ostream& operator<<(std::ostream& stm, const Fixed& fixed)
{
    stm << fixed.toFloat();
    return (stm);
}