#include "ScalarString.hpp"

ScalarString::ScalarString()
{
}

ScalarString::ScalarString(const char* s) : number(static_cast<std::string>(s))
{
}

ScalarString::ScalarString(const ScalarString& scalarString)
{
  *this = scalarString;
}

ScalarString::~ScalarString()
{
}

ScalarString& ScalarString::operator = (const ScalarString& scalarString)
{
  number = scalarString.number;
  return *this;
}

ScalarString::operator int() const
{
  double n;
  try
  {
    n = static_cast<double>(*this);
  }
  catch(const std::exception& e)
  {
    throw ImpossibleException();
  }
  if (!(std::numeric_limits<int>::min() <= n && n <= std::numeric_limits<int>::max()))
    throw ImpossibleException();
  return static_cast<int>(n);
}

ScalarString::operator char() const
{
  int n = static_cast<int>(*this);
  if (!(32 <= n && n <= 126))
    throw NonDisplayableException();
  return n;
}

ScalarString::operator float() const
{
  double n = static_cast<double>(*this);
  if (!(-std::numeric_limits<float>::max() <= n && n <= std::numeric_limits<float>::max()))
    throw ImpossibleException();
  return static_cast<float>(n);
}

ScalarString::operator double() const
{
  double n = std::atof(number.c_str());
  if (isnan(n))
    throw NanException();
  return n;
}

const char* ScalarString::ImpossibleException::what() const throw()
{
  return "imposible";
}

const char* ScalarString::NonDisplayableException::what() const throw()
{
  return "Non displayable";
}

const char* ScalarString::NanException::what() const throw()
{
  return "nan";
}
