#include <iostream>
#include "easyfind.hpp"

int main( void )
{
  {
    int i = 1;
    std::vector<int> arr;
    while (i < 10)
    {
      arr.push_back(i++);
    }

    int res = ::easyfind(arr, 3);
    if (res == -1)
      std::cout << "Value not found 404" << std::endl;
    else
      std::cout << "Value found at position " << res << std::endl;

    res = ::easyfind(arr, -1);
    if (res == -1)
      std::cout << "Value not found 404" << std::endl;
    else
      std::cout << "Value found at position " << res << std::endl;
  }

  return 0;
}
