#include <iostream>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"

bool RobotomyRequestForm::fifty = true;

RobotomyRequestForm::RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy)
{
  *this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & over)
{
  if (this != &over)
  {
    this->setiIfSigned(over.getiIfSigned());
  }
  return (*this);
}
std::ostream & operator<<(std::ostream & o, RobotomyRequestForm const & over)
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

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
  if (this->getiIfSigned() && executor.getGrade() <= this->getGradeE())
  {
    std::string text1 = "  has been robotomized successfully";
    std::string text2 = " hasn't been robotomized. It's failure";
    std::cout << "drrrrriiiiiiiillllllll......" << std::endl;
    std::cout << this->getName();
    if (fifty)
    {
      std::cout << text1 << std::endl;
      fifty = false;
    }
    else
    {
      std::cout << text2 << std::endl;
      fifty = true;
    }
  }
  else if (!this->getiIfSigned())
    throw Form::CannotExecute();
  else if (executor.getGrade() > this->getGradeE())
    throw Bureaucrat::GradeTooLowException();
}
