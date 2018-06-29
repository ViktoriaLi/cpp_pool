#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <string>
#include  <cstdlib>
#include "Convert.hpp"

Convert::Convert(){}

Convert::Convert(std::string argv, std::string type) : _toConvert(argv), _type(type)
{
  if (type == "char")
    _value = static_cast<int>(_toConvert[0]);
  else
  {
    std::stringstream geek(_toConvert);
    geek >> _value;
  }
}

Convert::Convert(Convert const & copy)
{
  *this = copy;
}

Convert::~Convert(){}

Convert & Convert::operator=(Convert const & over)
{
  if (this != &over)
  {
    this->_value = over._value;
  }
  return (*this);
}

std::string Convert::getToConvert() const
{
  return this->_toConvert;
}

std::string Convert::getType()
{
  return this->_type;
}

int Convert::getValue()
{
  return this->_value;
}

std::ostream & operator<<(std::ostream & o, Convert const & over)
{
  std::cout << "String to convert is " << over.getToConvert() << " with type " << const_cast<Convert &>(over).getType() << std::endl;
  return o;
}

char Convert::convertToChar()
{
  char res;
  res = static_cast<char>(_value);
  return (res);
}

int Convert::convertToInt()
{
  return (_value);
}

float Convert::convertToFloat()
{
  float res;
  res = static_cast<float>(_value);
  return (res);
}

double Convert::convertToDouble()
{
  double res;
  res = static_cast<double>(_value);
  return (res);
}
