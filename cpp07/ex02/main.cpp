#include <string>
#include <iostream>
#include "Array.hpp"

void testEmpty()
{
  Array<int> empty;
  try
  {
    empty[0] = 42;
    std::cout << empty[0];
  }
  catch(const std::exception& e)
  {
    std::cout << e.what();
  }
}

void testInt()
{
  Array<int> arr(3);
  for (int i = 0; i < 3; i++)
    std::cout << arr[i] << ' ';
  std::cout << '\n';

  arr[0] = 1, arr[1] = 2, arr[2] = 3;
  for (int i = 0; i < 3; i++)
    std::cout << arr[i] << ' ';
  std::cout << '\n';
}

void testString()
{
  Array<std::string> sarr(3);
  for (int i = 0; i < 3; i++)
    std::cout << sarr[i] << ',';
  std::cout << '\n';

  sarr[0] = "jiholee", sarr[1] = "42seoul", sarr[2] = "cpp07";
  for (int i = 0; i < 3; i++)
    std::cout << sarr[i] << ' ';
  std::cout << '\n';
}

void testAssignation()
{
  Array<int> arr(3);
  arr[0] = 1, arr[1] = 2, arr[2] = 3;

  Array<int> arr2;
  arr2 = arr;
  for (int i = 0; i < 3; i++)
    std::cout << arr2[i] << ' ';
  std::cout << '\n';
}

void testCopy()
{
  Array<int> arr(3);
  arr[0] = 1, arr[1] = 2, arr[2] = 3;

  Array<int> arr2(arr);
  for (int i = 0; i < 3; i++)
    std::cout << arr2[i] << ' ';
  std::cout << '\n';
}

int main(int argc, char** argv)
{
  if (argc != 2)
    return 1;

  int testCase = argv[1][0] - '0';
  if (testCase == 0) testEmpty();
  if (testCase == 1) testInt();
  if (testCase == 2) testString();
  if (testCase == 3) testAssignation();
  if (testCase == 4) testCopy();

  std::cout << "\n\n";
  system("leaks ex02");
}