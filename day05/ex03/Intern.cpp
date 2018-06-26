#include <iostream>
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){}

Intern::Intern(Intern const & copy)
{
  *this = copy;
}

Intern::~Intern(){}

Intern & Intern::operator=(Intern const &)
{
  return *this;
}

Form *Intern::makeForm(std::string name, std::string target)
{
  if (name == "shrubbery request")
  {
    std::cout << "Intern creates " << name << std::endl;
    return (new ShrubberyCreationForm(target));
  }
  else if (name == "robotomy request")
  {
    std::cout << "Intern creates " << name << std::endl;
    return (new RobotomyRequestForm(target));
  }
  else if (name == "presidential request")
  {
    std::cout << "Intern creates " << name << std::endl;
    return (new PresidentialPardonForm(target));
  }
  else
  {
    std::cout << "Intern creates " << "Unknown name" << std::endl;
    return (NULL);
  }
}
