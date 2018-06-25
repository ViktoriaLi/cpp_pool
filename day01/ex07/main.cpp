// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:25:29 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:25:32 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>

int main (int argc, char **argv)
{
  size_t pos;
  char buf[255];
  std::string tmp;
  std::string name;
  if (argc < 4)
  {
    std::cout << "Add 1 file and 2 strings and not more" << std::endl;
    return (0);
  }
  std::ifstream ifile(argv[1], std::ios_base::in);
  if (!ifile.is_open() || ifile.eof())
  {
    std::cout << "Incorrect or empty file" << std::endl;
    return (0);
  }
  if (!argv[2] || strcmp(argv[2], "") == 0 || argv[2][0] == 0
    || !argv[3] || strcmp(argv[3], "") == 0 || argv[3][0] == 0)
  {
    std::cout << "Empty string" << std::endl;
    return (0);
  }
  name = (std::string)argv[1] + (std::string)".replace";
  std::ofstream ofile(name, std::ios_base::out);
  if (!ofile.is_open())
    std::cout << "Output file not opened" << std::endl;
  while (!ifile.eof())
  {
    ifile.getline(buf, 254);
    tmp = buf;
    pos = tmp.find(argv[2]);
    if (pos != std::string::npos)
    {
      tmp.replace(pos, strlen(argv[2]), argv[3]);
    }
    ofile << tmp;
    ofile << '\n';
  }
  ifile.close();
  ofile.close();
  return (0);
}
