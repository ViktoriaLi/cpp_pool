#include <iostream>
#include <ctime>
#include "Array.hpp"

template <typename T>
class Array;

int main( void )
{
  {
    std::srand(time(NULL));
    unsigned int n = rand() % 10 + 1;
    Array <int> myArray(n);
    unsigned int i = 0;
    while (i < n)
    {
      myArray.setValue(std::rand() % 100, i);
      i++;
    }
    /*try
    {
      if (i < myArray.size())
        myArray.setValue(std::rand() % 100, i);
      else
        throw "Incorrect array's element number";
    }
    catch (const char *ex)
    {
      std::cout << ex << std::endl;
    }*/
    i = 0;
    while (i < n)
    {
      std::cout << myArray[i] << std::endl;
      i++;
    }
    try
    {
      if (i < myArray.size())
        std::cout << myArray[i] << std::endl;
      else
        throw "Incorrect array's element number";
    }
    catch (const char *ex)
    {
      std::cout << ex << std::endl;
    }
  }

  {
    std::srand(time(NULL));
    unsigned int n = rand() % 10 + 1;
    Array <std::string> myArray(n);
    unsigned int i = 0;
    while (i < n)
    {
      myArray.setValue("test", i);
      i++;
    }

    i = 0;
    while (i < n)
    {
      std::cout << myArray[i] << std::endl;
      i++;
    }
    try
    {
      if (i < myArray.size())
        std::cout << myArray[i] << std::endl;
      else
        throw "Incorrect array's element number";
    }
    catch (const char *ex)
    {
      std::cout << ex << std::endl;
    }
  }
  return 0;
}
