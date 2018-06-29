#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>


class Convert
{
  public:
    Convert();
    Convert(std::string argv, std::string type);
    Convert(Convert const & copy);
    ~Convert();
    Convert & operator=(Convert const & over);

    std::string getToConvert() const;
    std::string getType();
    int getValue();

    char convertToChar();
    int convertToInt();
    float convertToFloat();
    double convertToDouble();
    std::string conv_names[4];
  private:
    const std::string _toConvert, _type;
    double _value;
};

std::ostream & operator<<(std::ostream &o, Convert const &over);

#endif
