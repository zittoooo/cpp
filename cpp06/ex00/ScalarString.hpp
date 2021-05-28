#ifndef SCALARSTRING_HPP
#define SCALARSTRING_HPP

#include <iostream>
#include <string>
#include <exception>
#include <limits>
#include <math.h>
#include <iomanip>

class ScalarString
{
 private:
  ScalarString();
  std::string number;
 public:
  ScalarString(const char* number);
  ScalarString(const ScalarString& scalarString);
  virtual ~ScalarString();

  ScalarString& operator = (const ScalarString& scalarString);
  operator int() const;
  operator char() const;
  operator float() const;
  operator double() const;

  class ImpossibleException : public std::exception
  {
   public:
    const char* what() const throw();
  };
  class NonDisplayableException : public std::exception
  {
   public:
    const char* what() const throw();
  };
  class NanException : public std::exception
  {
   public:
    const char* what() const throw();
  };
  // class InfException : public std::exception
  // {
  //  public:
  //   const char* what() const throw();
  // };
};

#endif
