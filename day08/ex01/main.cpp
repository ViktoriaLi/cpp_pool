#include <iostream>
#include <vector>
#include "span.hpp"

int main()
{
  {
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  }
  {
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    try
    {
      sp.addNumber(11);
    }
    catch (std::exception & ex)
    {
      std::cout << ex.what() << std::endl;
    }
  }
  {
    Span sp = Span(5);
    try
    {
      std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::exception & ex)
    {
      std::cout << ex.what() << std::endl;
    }
  }
}
