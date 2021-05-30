#include "ScalarString.hpp"
#include <iostream>

int main(int argc, char **argv)
{
  if (argc != 2)
    return 1;

  ScalarString scalarString(argv[1]);

  try{
    char ch = static_cast<char>(scalarString);
    std::cout << "char : " << ch << "\n";
  }
  catch(const std::exception& e)
  {
    std::cout << "char : ";
    std::cout << e.what() << '\n';
  }

  try{
    int i = static_cast<int>(scalarString);
    std::cout << "int : " << i << "\n";
  }
  catch(const std::exception& e)
  {
    std::cout << "int : ";
    std::cout << e.what() << '\n';
  }

  try{
    float i = static_cast<float>(scalarString);
    std::cout << "float : ";
    std::cout << std::fixed; 
    std::cout.precision(1);
    std::cout << i << "f\n";
  }
  catch(const ScalarString::ImpossibleException& e)
  {
    std::cout << "float : ";
    std::cout << e.what() << "\n";
  }

  // try{
  //   double i = static_cast<double>(scalarString);
  //   std::cout << "double : ";
  //   std::cout << std::fixed; 
  //   std::cout.precision(1);
  //   std::cout << i << "\n";
  // }
  
}
