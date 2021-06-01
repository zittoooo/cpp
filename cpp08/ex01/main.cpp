#include <vector>
#include "span.hpp"
void test()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);

    Span span(15);
    try
    {
        span.addNumber(v.begin(), v.end());
    }
    catch (std::exception &e)
    {
        std::cout << e.what();
    }
    try
    {
        std::cout << span.shortestSpan() << std::endl;
        std::cout << span.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what();
    }
}

int main()
{
    Span sp = Span(5);

    try
    {
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        // sp.addNumber(11);
    }
    catch (std::exception &e)
    {
        std::cout << e.what();
    }
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what();
    }

    test();
    return (0);
}