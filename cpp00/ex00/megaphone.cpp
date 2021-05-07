#include <iostream>

char    *to_upperstr(char *s)
{
    int i = 0;
    while (s[i])
    {
        s[i] = toupper(s[i]);
        i++;
    }
    return (s);
}

int main(int argc, char *argv[])
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i=1; i < argc; i++ )
        std::cout << to_upperstr(argv[i]);
    std::cout << std::endl;
    return (0);
}