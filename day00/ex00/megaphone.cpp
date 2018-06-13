#include <iostream>

int main(int argc, char **argv)
{
  int i;
  int j;

  i = 1;
  j = 0;
  if (argc == 1)
  {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
  }
  while (i < argc)
  {
    j = 0;
    while (argv[i][j])
    {
      if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
        std::cout << (char)(argv[i][j] - 32);
      else
        std::cout << argv[i][j];
      j++;
    }
    i++;
  }
  std::cout << std::endl;
  return (0);
}
