#include <iostream>
#include "Convert.hpp"
#include <sstream>
void make_output(std::string incom, std::string type)
{
  std::cout.setf(std::ios::fixed);
  std::cout.precision(1);
  Convert ToConvert(incom, type);
  std::cout << "char: ";
  if ((type == "char" && isprint(ToConvert.convertToChar())))
    std::cout << ToConvert.convertToChar() << std::endl;
  else if (!isprint(ToConvert.convertToChar()))
    std::cout << "Non displayable" << std::endl;
    std::cout << "int: " << ToConvert.convertToInt() << std::endl;
    std::cout << "float: " << ToConvert.convertToFloat() << "f" << std::endl;
    std::cout << "double: " << ToConvert.convertToDouble() << std::endl;
}

bool check_string(std::string incom, std::string &type)
{
  int i = 0;
  int points = 0;
  int fs = 0;

  while (incom[i] != '\0')
  {
    if (incom[i] < '0' || incom[i] > '9')
    {
      if (incom[i] == 'f' && i != 0 && points == 1)
        fs++;
      else if (incom[i] == '.' && i != 0 && incom[i + 1] >= '0' && incom[i + 1] <= '9')
        points++;
      else if ((incom[i] != '-' && i != 0) || (incom[i] == '.' && incom[i + 1] < '0' && incom[i + 1] > '9'))
      {
        std::cout << "String has incorrect symbols to convert into char, int, float and double" << std::endl;
        return (false);
      }
    }
    i++;
  }
  if (fs == 1 && points == 1)
    type = "float";
  else if (fs == 0 && points == 1)
    type = "double";
  else if (fs == 0 && points == 0)
    type = "int";
  else
  {
    std::cout << "String has incorrect symbols to convert into char, int, float and double" << std::endl;
    return (false);
  }
  return (true);
}

int main(int argc, char **argv)
{
  std::string type;

  if (argc == 1)
  {
    std::cout << "Usage: ./convert char, int float or double string" << std::endl;
    return (0);
  }
  std::string incom = static_cast<std::string>(argv[1]);
  /*double d = atof(argv[1]);
  std::cout << "Test" << d << std::endl;*/
  if (strlen(argv[1]) == 1 && argv[1][0] < '0' && argv[1][0] > '9')
  {
    type = "char";
    make_output(incom, type);
  }
  else if (strlen(argv[1]) == 1 && argv[1][0] >= '0' && argv[1][0] <= '9')
  {
    type = "int";
    make_output(incom, type);
  }
  else if (incom == "-inff" || incom == "+inff" || incom == "nanf")
  {
    type = "float";
    make_output(incom, type);
  }
  else if (incom == "-inf" || incom == "+inf" || incom == "nan")
  {
    type = "double";
    make_output(incom, type);
  }
  else
  {
    if (check_string(incom, type))
    {
      make_output(incom, type);
    }
  }
}
