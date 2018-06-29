#include <iostream>

template <typename Num>
void iter(Num *array, int len, void (*f)(Num elem))
{
  int i = 0;
  while (i < len)
  {
    (*f)(array[i++]);
  }
}

template <typename Num>
void intTest(Num elem)
{
  std::cout << elem << std::endl;
}

class Awesome
  {
    public:
          Awesome( void ) : _n( 42 ) { return; }
          int get( void ) const { return this->_n; }

    private:
          int _n;
  };

  std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

  template< typename T >
  void print( T x ) { std::cout << x << std::endl; return; }

  int main()
  {
      int tab[] = { 0, 1, 2, 3, 4 };     // <--- J'ai jamais compris pourquoi on peut pas ecrire int[]tab. Ca aurait plus de sens vous trouvez pas ?
      Awesome tab2[5];
      iter( tab, 5, print );
      iter( tab2, 5, print );
      return 0;
  }

/*int main( void )
{
  {
    int arr[3] = {2, 3, 4};
    std::cout << "Int test" << std::endl;
    ::iter(arr, 3, &intTest);
  }

  {
    float arr[3] = {2.23, 3.56, 0.19};
    std::cout << "Float test" << std::endl;
    ::iter(arr, 3, &intTest);
  }

  {
    std::string arr[3] = {"str1", "str2", "str3"};
    std::cout << "String test" << std::endl;
    ::iter(arr, 3, &intTest);
  }
  return 0;
}*/
