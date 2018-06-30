#include <iostream>
#include <vector>

template <typename T>
int easyfind(T arr, int a)
{
  std::vector<int>::const_iterator it = arr.begin();
  std::vector<int>::const_iterator ite = arr.end();
  int i = 0;
  while (it != ite)
  {
    if (*it == a)
      return i;
    i++;
    it++;
  }
  return -1;
}
