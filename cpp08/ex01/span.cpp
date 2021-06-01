#include "span.hpp"

Span::Span() {}
Span::Span(unsigned int n) :n(n) {}
Span::Span(const Span& span)
{
    *this = span;
}
Span::~Span() {}
Span& Span::operator=(const Span& span)
{
    n = span.n;
    ms = span.ms;
    return (*this);
}

void Span::addNumber(int n)
{
    if (this->n == ms.size())
        throw FullException();
    ms.insert(n);
}

int Span::shortestSpan() const
{
    if (ms.size() <= 1)
        throw TooSmallException();
    std::multiset<int>::iterator it1 = ms.begin();
    std::multiset<int>::iterator it2 = ++ms.begin();
    std::set<int> sub;
    for (; (it1 != --ms.end()) && (it2 != ms.end()); it1++, it2++)
    {
            sub.insert(*it2 - *it1);
    }
    return (*sub.begin());
}

int Span::longestSpan() const
{
    if (ms.size() <= 1)
        throw TooSmallException();
    return (*(--ms.end()) - *(ms.begin()));
}

const char * Span::FullException::what() const throw()
{
    return "already full\n";
}
const char * Span::TooSmallException::what() const throw()
{
    return "too few element\n";
}