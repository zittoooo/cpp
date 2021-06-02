#ifndef SPAN_HPP
#define SPAN_HPP
# include <set>
# include <iostream>
# include <exception>

class Span
{
private:
    Span();
    unsigned int n;
    std::multiset<int> ms;
    class FullException : public std::exception
    {
        const char * what() const throw();
    };
    class TooSmallException : public std::exception
    {
        const char *what() const throw();
    };
public:
    Span(unsigned int n);
    Span(const Span & span);
    ~Span();
    Span& operator=(const Span& span);
    void addNumber(int n);
    template <typename T1, typename T2>
    void addNumber(T1 it1 ,T2 it2)
    {
        for (;it1 != it2; it1++)
        {
            addNumber(*it1);
        }
    }
    int shortestSpan() const;
    int longestSpan() const;
};

#endif
