#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 72, 45)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy)
{
  *this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & over)
{
  if (this != &over)
  {
    this->setiIfSigned(over.getiIfSigned());
  }
  return (*this);
}
std::ostream & operator<<(std::ostream & o, PresidentialPardonForm const & over)
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

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
  if (this->getiIfSigned() && executor.getGrade() <= this->getGradeE())
  {
    std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
  }
  else if (!this->getiIfSigned())
    throw Form::CannotExecute();
  else if (executor.getGrade() > this->getGradeE())
    throw Bureaucrat::GradeTooLowException();
}
