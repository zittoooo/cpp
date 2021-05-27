#ifndef UI_HPP
#define UI_HPP

#include <string>
#include <iostream>

class Ui {
 public:
  static int readInt(const std::string& what);
  static unsigned readU(const std::string& what);
  static long long readLL(const std::string& what);
  static std::string readStr(const std::string& what);
  static void setTextColor(const std::string& color);
  static std::ostream& msg(void);
  static std::ostream& errorMsg(void);
  static std::string endMsg(std::string end="\n");

  static void colorPrint(const std::string& msg);

  static const std::string colorPrefix;
  static const std::string red;
  static const std::string green;
  static const std::string blue;
  static const std::string white;

 private:
  static std::string textColor;
  static std::string errorColor;
};

#endif