#include "Ui.hpp"

const std::string Ui::colorPrefix = "\033[";
const std::string Ui::red = Ui::colorPrefix + "31m";
const std::string Ui::green = Ui::colorPrefix + "32m";
const std::string Ui::blue = Ui::colorPrefix + "34m";
const std::string Ui::white = Ui::colorPrefix + "37m";
std::string Ui::textColor = Ui::white;
std::string Ui::errorColor = Ui::red;

std::string Ui::readStr(const std::string& what) {
  Ui::msg() << what << ": " << Ui::endMsg("");
  std::string str;
  std::getline(std::cin, str);
  if (std::cin.eof())
    exit(0);
  if (std::cin.fail()) {
    Ui::errorMsg() << "read fail. try again" << Ui::endMsg();
    std::cin.clear();
    return readStr(what);
  }
  return str;
}

int Ui::readInt(const std::string& what) {
  long long n = readLL(what);
  if (INT_MIN <= n && n <= INT_MAX) return n;
  Ui::errorMsg() << "please enter range: "
                 << INT_MIN << " ~ " << INT_MAX << Ui::endMsg();
  return readInt(what);
}

unsigned Ui::readU(const std::string& what) {
  long long n = readLL(what);
  if (0 <= n && n <= UINT_MAX) return n;
  Ui::errorMsg() << "please enter range: 0 ~ " << UINT_MAX << Ui::endMsg();
  return readU(what);
}

long long Ui::readLL(const std::string& what) {
  long long n = strtoll(readStr(what).c_str(), NULL, 10);
  if (errno == 0) return n;
  Ui::errorMsg() << strerror(errno) << Ui::endMsg();
  errno = 0;
  return readLL(what);
}

std::ostream& Ui::msg(void) {
  return std::cout << Ui::textColor;
}

std::ostream& Ui::errorMsg(void) {
  return std::cout << Ui::errorColor;
}

std::string Ui::endMsg(std::string end) {
  return (end + Ui::white);
}

void Ui::setTextColor(const std::string& color) {
  Ui::textColor = color;
}