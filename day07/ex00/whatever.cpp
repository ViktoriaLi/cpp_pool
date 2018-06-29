#include <iostream>

class Awesome
  {
    public:
      Awesome()
      {

      };
      Awesome( int n ) : _n( n ) {}

      bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
      bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
      bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
      bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
      bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
      bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
      int getV(){return _n;};
    private:
      int _n;
  };

template <typename Num>
void swap(Num &one, Num &two)
{
  Num tmp;
  tmp = one;
  one = two;
  two = tmp;
}

template <typename Num>
Num min(Num one, Num two)
{
  if (one < two)
    return (one);
  else
    return (two);
}

template <typename Num>
Num max(Num one, Num two)
{
  if (one > two)
    return (one);
  else
    return (two);
}

int main( void )
{
  int a = 2;
  int b = 3;
  ::swap( a, b );
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
  std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
  std::string c = "chaine1";
  std::string d = "chaine2";
  ::swap(c, d);
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
  std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

  Awesome one(3);
  Awesome two(5);
  std::cout << min(one, two).getV() << std::endl;
  std::cout << max(one, two).getV() << std::endl;
  swap(one, two);
  std::cout << one.getV() << std::endl;
  std::cout << two.getV() << std::endl;
  //std::cout << swap(one, two) << std::endl;
  return 0;
}
