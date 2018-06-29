#include <iostream>

int main( void )
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
}
