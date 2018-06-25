#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string usName, int usGrade) : _name(usName), _grade(usGrade){}

Bureaucrat::Bureaucrat(Bureaucrat const & copy)
{
  *this = copy;
}

std::string Bureaucrat::getName() const
{
  return this->_name;
}

int Bureaucrat::getGrade() const
{
  return this->_grade;
}


Bureaucrat::~Bureaucrat(){}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & over)
{
  if (this != &over)
  {
    this->_grade = over._grade;
  }
  return (*this);
}

void Bureaucrat::gradeIncr()
{
  _grade += 1;
}

void Bureaucrat::gradeDecr()
{
  _grade -= 1;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & over)
{
  std::cout << over.getName() << " , bureaucrat grade " << over.getGrade() << std::endl;
  return o;
}
