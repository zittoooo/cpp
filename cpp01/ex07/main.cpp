#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdexcept>
#include <algorithm>
#include <fcntl.h>
std::string streamToString(std::ifstream &in)
{
    std::ostringstream sstr;
    sstr << in.rdbuf();
    return sstr.str();
}

void ReplaceStringInPlace(std::string& subject, const std::string& search,
                          const std::string& replace) {
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != std::string::npos) {
         subject.replace(pos, search.length(), replace);
         pos += replace.length();
    }
}

int main(int argc, char *argv[])
{
    std::string contents;
    if (argc == 4)
    {
        try{
            std::ifstream in(argv[1]);
            if (in.fail())
                throw (std::invalid_argument("file open fail"));
            contents = streamToString(in);
        }
        catch(std::invalid_argument &e)
        {
            std::cout << e.what() << "\n";
            return (0);
        }
        std::string before = argv[2];
        std::string after = argv[3];
        ReplaceStringInPlace(contents, before, after);
        std::ofstream out(argv[1] + std::string(".replace"));
        out << contents;
    }
    else
    // std::ios::out;std::ios::trunc;
    // 0x10 | 0x20; 0x30;
    // 0b010000
    // 0b100000
    // 0b110000
        std::cout << "input error\n";
    return (0);
}

