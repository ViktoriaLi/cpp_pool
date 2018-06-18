#include <iostream>
#include <fstream>

/*int if_correct_args(char **argv, std::ifstream ifile)
{
  int i = 1;
  int file = 0;

  while (i < 4)
  {
    ifile.open(argv[i], std::ios_base::in);
    if (ifile.is_open() && file == 0)
      file = i;
    else if (ifile.is_open() && file != 0)
    {
      std::cout << "More than 1 file" << std::endl;
      return (0);
    }
    else if (!ifile.is_open())
    {
      if (argv[i] == NULL || strcmp(argv[i], "") == 0 || argv[i][0] == 0)
      {
        std::cout << "Enpty string" << std::endl;
        return (0);
      }
    }
    i++;
  }
  return (1);
}*/

int main (int argc, char **argv)
{
  char *buf = NULL;
  int i = 1;
  int file = 0;
  std::string name;
  std::ifstream ifile;
  if (argc != 4)
  {
    std::cout << "Add 1 file and 2 strings and not more" << std::endl;
    return (0);
  }
  while (i < 4)
  {
    ifile.open(argv[i], std::ios_base::in);
    if (ifile.is_open() && file == 0)
      file = i;
    /*else if (ifile.is_open() && file != 0)
    {
      std::cout << "More than 1 file" << std::endl;
      return (0);
    }*/
    else if (!ifile.is_open())
    {
      if (ifile.eof() || argv[i] == NULL || strcmp(argv[i], "") == 0 || argv[i][0] == 0)
      {
        std::cout << "Empty string or file" << std::endl;
        return (0);
      }
    }
    i++;
  }
  if (file == 0)
  {
    std::cout << "There is no file" << std::endl;
    return (0);
  }
  std::ofstream ofile("test", std::ios_base::out);
  if (!ofile.is_open())
    std::cout << "Output file not opened" << std::endl;
  /*while (ifile.getline(&buf, 100))
  {
    ofile << buf;
  }*/
  //return (0);
  while (!ifile.eof())
  {
    ifile >> buf;
    //ofile << buf;
  }

  /*ifile.close();
  ofile.close();*/
}
