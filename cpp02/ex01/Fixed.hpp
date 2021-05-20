#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed
{
private:
	int fixedPoint;
	static const int fract = 8;
public:
	Fixed();
	Fixed(int const raw);
	Fixed(float const raw);
	Fixed(const Fixed& fixed);
	~Fixed();
	Fixed& operator = (const Fixed& fixed);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& stm, const Fixed& fixed);
#endif