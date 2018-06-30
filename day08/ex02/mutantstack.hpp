#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
  public:
    MutantStack();
    MutantStack(unsigned int n);
    MutantStack(MutantStack const & copy);
    ~MutantStack();
    MutantStack & operator=(MutantStack const & over);
    void addNumber(int n);

  private:
    typedef std::stack<T> _st;
};

#endif
