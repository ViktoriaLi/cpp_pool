#include <vector>
#include <iostream>
#include "span.hpp"

Span::Span(){
  arr.reserve(0);
}

Span::Span(unsigned int n)
{
  arr.reserve(n);
  _n = n;
}

Span::Span(Span const & copy)
{
  *this = copy;
}

Span::~Span(){}

Span & Span::operator=(Span const & over)
{
  if (this != &over)
  {
    this->arr = over.arr;
  }
  return (*this);
}

void Span::addNumber(int n)
{
    if (arr.size() < _n)
      arr.push_back(n);
    else
      throw std::out_of_range::out_of_range("Out of range");
}

unsigned int Span::shortestSpan()
{
  if (arr.size() > 1)
  {
    std::sort (arr.begin(), arr.begin());
    std::vector<int>::const_iterator it = arr.begin();
    std::vector<int>::const_iterator ite = arr.end();
    unsigned int res = 0;
    while (ite != it)
    {
      if (ite == arr.end())
        res = *ite - *(ite - 1);
      else if (static_cast<unsigned int>(*ite - *(ite - 1 )) < res)
        res = *ite - *(ite - 1);
      ite--;
    }
    return (res);
  }
  else
  {
      throw std::out_of_range::out_of_range("Less than 2 values");
      return -1;
  }
}

unsigned int Span::longestSpan()
{
  std::vector<int>::const_iterator min = std::min_element(std::begin(arr), std::end(arr));
  std::vector<int>::const_iterator max = std::max_element(std::begin(arr), std::end(arr));

  return (*max - *min);
}
