#include <iostream>
#include <vector>
#include <string>
#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    std::vector<int>::iterator it = easyfind(v, 1);
    std::cout << *it << std::endl;

    {
        std::vector<int> test;
        test.push_back(3);
        std::cout << *easyfind(test, 1) << std::endl;
    }

    // 빈벡터.. 터짐
    {
        std::vector<int> test;
        std::cout << *easyfind(test, 1) << std::endl;
    }
}