#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form() : _grade_s(150), _grade_e(150)
{
}

Form::Form(std::string usName, int usGradeS, int usGradeE) : _name(usName),
_grade_s(usGradeS), _grade_e(usGradeE)
{
  if (usGradeE > 150 || usGradeS > 150)
    throw Form::GradeTooLowException();
  else if (usGradeE < 1 || usGradeS < 1)
    throw Form::GradeTooHighException();
  _if_signed = false;
}

Form::Form(Form const & copy) : _name(copy._name), _grade_s(copy._grade_s), _grade_e(copy._grade_e)
{
  *this = copy;
}

Form::~Form(){}

Form & Form::operator=(Form const & over)
{
  if (this != &over)
  {
    this->_if_signed = over._if_signed;
  }
  return (*this);
}

std::string Form::getTarget() const
{
  return this->_target;
}

std::string Form::getName() const
{
  return this->_name;
}

int Form::getGradeS() const
{
  return this->_grade_s;
}

int Form::getGradeE() const
{
  return this->_grade_e;
}

bool Form::getiIfSigned() const
{
  return this->_if_signed;
}

void Form::beSigned(Bureaucrat & Burea)
{
  if (Burea.getGrade() > this->_grade_s)
    throw Form::GradeTooLowException();
  if(this->_if_signed)
    throw Form::AlreadySigned();
  _if_signed = true;
}

void Form::setiIfSigned(bool sign)
{
  this->_if_signed = sign;
}

std::ostream & operator<<(std::ostream & o, Form const & over)
{
  std::string yes_no;
  if (over.getiIfSigned())
    yes_no = "not signed";
  else
    yes_no = "signed";
  std::cout << over.getName() << " is " << yes_no << " form with "
  << over.getGradeS() << " to sign and " << over.getGradeE() << " to execute" << std::endl;
  return o;
}

Form::GradeTooLowException::GradeTooLowException()
{

}
Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & copy)
{
  *this = copy;
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{

}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(GradeTooLowException const & over)
{
  if (this != &over)
  {
    *this = over;
  }
  return (*this);
}

const char* Form::GradeTooLowException::what() const throw()
{
  return "Grade is too low";
}

Form::GradeTooHighException::GradeTooHighException()
{

}
Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & copy)
{
  *this = copy;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{

}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(GradeTooHighException const & over)
{
  if (this != &over)
  {
    *this = over;
  }
  return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
  return "Grade is too high";
}

Form::AlreadySigned::AlreadySigned()
{

}
Form::AlreadySigned::AlreadySigned(AlreadySigned const & copy)
{
  *this = copy;
}

Form::AlreadySigned::~AlreadySigned() throw()
{

}

Form::AlreadySigned & Form::AlreadySigned::operator=(AlreadySigned const & over)
{
  if (this != &over)
  {
    *this = over;
  }
  return (*this);
}

const char* Form::AlreadySigned::what() const throw()
{
  return "Already signed";
}

Form::CannotExecute::CannotExecute()
{

}
Form::CannotExecute::CannotExecute(CannotExecute const & copy)
{
  *this = copy;
}

Form::CannotExecute::~CannotExecute() throw()
{

}

Form::CannotExecute & Form::CannotExecute::operator=(CannotExecute const & over)
{
  if (this != &over)
  {
    *this = over;
  }
  return (*this);
}

const char* Form::CannotExecute::what() const throw()
{
  return "Form should be signed before execute";
}
