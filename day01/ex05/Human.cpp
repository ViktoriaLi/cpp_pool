#include <iostream>
#include "Human.hpp"
#include "Brain.hpp"

Human::Human()
{
  Brain second;
}

Human::~Human()
{

}

std::string Human::identify()
{
  return (br_elem.identify());
}
