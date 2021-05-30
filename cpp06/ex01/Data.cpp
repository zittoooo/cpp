# include "Data.hpp"

std::string* CreateStr()
{
    static const char *alnum = "bcdefghijklmnopqrstuvwzyz0123456789";
    std::string *str = new std::string();
    for (int i = 0; i < 8; i++)
    {
        *str += alnum[rand() % 36];
        
    }
    return (str);
}

void *serialize(void)
{
    char *raw = new char[sizeof(void *) * 2 + sizeof(int)];
    std::string *s1 = CreateStr();
    int n = rand();
    std::string *s2 = CreateStr();

    *(reinterpret_cast<std::string **>(raw)) = s1;
    *(reinterpret_cast<int*>(raw + sizeof(std::string*))) = n;
    *(reinterpret_cast<std::string **>(raw + sizeof(std::string*) + sizeof(int))) = s2;
    return static_cast<void *>(raw);
}

Data* deserialize(void * _raw)
{
    char *raw = static_cast<char *>(_raw);
    Data *data = new Data();
    data->s1 = *reinterpret_cast<std::string **>(raw);
    data->n = *reinterpret_cast<int*>(raw + sizeof(std::string *));
    data->s2 = *reinterpret_cast<std::string **>(raw + sizeof(std::string *) + sizeof(int));
    return (data);
}