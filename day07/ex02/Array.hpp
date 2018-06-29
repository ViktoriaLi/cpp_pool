#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T = int>

class Array
{
  public:
    Array<T>(){
      _a = new T();
      _a = NULL;
      _size = 0;
    };
    Array<T>(unsigned int n)
    {
      _size = n;
      _a = new T[_size];
    }
    ~Array<T>(){delete [] _a;};
    Array<T>(Array<T> const & copy)
    {
      *this = copy;
    }
    Array<T> & operator=(Array<T> const & over)
    {
      if (*this != over)
        this->a = over.a;
      return (*this);
    }

    void setValue(T elem, unsigned int n)
    {
      this->_a[n] = elem;
    }

    T operator[](unsigned int n) const
    {
      return this->_a[n];
    }

    unsigned int size() const
    {
      return this->_size;
    }
    void setSize(unsigned int size)
    {
      return this->_size = size;
    }

  private:
    unsigned int _size;
    T *_a;
};

#endif
