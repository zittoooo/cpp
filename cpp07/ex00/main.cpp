#include "whatever.hpp"
#include <cstring>
#include <iostream>
#include <string>

class
    Awesome
{
public:
    Awesome(int n) : _n(n) {}
    bool operator==(Awesome const &rhs) const { return (this->_n == rhs._n); }
    bool operator!=(Awesome const &rhs) const { return (this->_n != rhs._n); }
    bool operator>(Awesome const &rhs) const { return (this->_n > rhs._n); }
    bool operator<(Awesome const &rhs) const { return (this->_n < rhs._n); }
    bool operator>=(Awesome const &rhs) const { return (this->_n >= rhs._n); }
    bool operator<=(Awesome const &rhs) const { return (this->_n <= rhs._n); }
    int getN() const
    {
        return (_n);
    }
private:
    int _n;
};

std::ostream & operator << (std::ostream & o, Awesome const &a)
{
    std::cout<< a.getN();
    return (o);
}

int main( void ) {
    int a = 2;
    int b = 3;
    
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    double ab = 3.33;
    double cd = 4.44;

    swap(ab, cd);
    std::cout << ab << " " << cd << std::endl;
    std::cout << "min( ab, cd ): " << ::min(ab, cd) << std::endl;
    std::cout << "max( ab, cd ) : "<< max(ab, cd) << std::endl;

    Awesome A(10);
    Awesome B(20);

    ::swap(A, B);
    std::cout << A <<  " " << B << std::endl;
    std::cout << ::min(A, B) << std::endl;
    std::cout << ::max(A, B) << std::endl;

    return 0;
}