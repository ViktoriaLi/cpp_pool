#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern
{
  public:
    Intern();
    Intern(Intern const & copy);
    ~Intern();
    Intern & operator=(Intern const & over);

    Form *makeForm(std::string name, std::string target);
};

#endif
