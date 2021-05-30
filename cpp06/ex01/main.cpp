# include "Data.hpp"
# include <iostream>
# include <string>


int main()
{
    srand(time(NULL));
    void *raw = serialize();
    Data * data = deserialize(raw);

    std::cout << *data->s1 << "\n";
    std::cout << data->n << "\n";
    std::cout << *data->s2 << "\n";
}