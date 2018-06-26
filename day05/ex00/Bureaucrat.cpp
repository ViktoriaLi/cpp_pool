#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string usName, int usGrade) : _name(usName)
{
  if (usGrade > 150)
    throw Bureaucrat::GradeTooLowException();
  else if (usGrade < 1)
    throw Bureaucrat::GradeTooHighException();
  else
    _grade = usGrade;
}

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
  if (_grade - 1 >= 1)
    _grade -= 1;
  else
    throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::gradeDecr()
{
  if (_grade + 1 <= 150)
    _grade += 1;
  else
    throw Bureaucrat::GradeTooLowException();
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & over)
{
  std::cout << over.getName() << ", bureaucrat grade " << over.getGrade() << std::endl;
  return o;
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{

}
Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & copy)
{
  *this = copy;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{

}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & over)
{
  if (this != &over)
  {
    *this = over;
  }
  return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
  return "Grade is too low";
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{

}
Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & copy)
{
  *this = copy;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{

}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & over)
{
  if (this != &over)
  {
    *this = over;
  }
  return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
  return "Grade is too high";
}
