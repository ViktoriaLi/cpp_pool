#include <vector>
#include <iostream>
#include "MutantStack.hpp"

MutantStack::MutantStack(){}

MutantStack::MutantStack(MutantStack const & copy)
{
  *this = copy;
}

MutantStack::~MutantStack(){}

MutantStack & MutantStack::operator=(MutantStack const & over)
{
  if (this != &over)
  {
    this->_st = over._st;
  }
  return (*this);
}
