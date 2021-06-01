#include "iter.hpp"
#include <iostream>
#include <string>

template<typename T>
void addOne(T &arr)
{
    arr += 1;
}

int main()
{
    int arr[] = {1, 2, 3};
    iter(arr, 3, addOne<int>);

    for (int i = 0; i < 3; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    char carr[] = {'a', 'b', 'c'};
    iter(carr, 3, addOne<char>);
    for (int i = 0; i < 3; i++)
    {
        std::cout << carr[i] << " ";
    }
}