#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
  public:
    Span();
    Span(unsigned int n);
    Span(Span const & copy);
    ~Span();
    Span & operator=(Span const & over);
    void addNumber(int n);
    unsigned int shortestSpan();
    unsigned int longestSpan();

  private:
    std::vector<int> arr;
    unsigned int _n;
};

#endif
