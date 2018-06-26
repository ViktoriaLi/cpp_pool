#include <iostream>
#include <fstream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy)
{
  *this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & over)
{
  if (this != &over)
  {
    this->setiIfSigned(over.getiIfSigned());
  }
  return (*this);
}

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm const & over)
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

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
  if (this->getiIfSigned() && executor.getGrade() <= this->getGradeE())
  {
    std::string name1 = this->getName();
    std::string name2 = "_shrubbery";
    std::string name = name1 + name2;
    std::ofstream ofile(name, std::ios_base::out);
    if (!ofile.is_open())
      std::cout << "Output file not opened" << std::endl;
    ofile << "       ###  ";
    ofile << '\n';
    ofile << "      #o###";
    ofile << '\n';
    ofile << "    #####o###";
    ofile << '\n';
    ofile << "   #o#|#|#|###";
    ofile << '\n';
    ofile << "    ###|||#o#";
    ofile << '\n';
    ofile << "     # }|{  #";
    ofile << '\n';
    ofile << "       }|{";
    ofile << '\n';
    ofile.close();
  }
  else if (!this->getiIfSigned())
    throw Form::CannotExecute();
  else if (executor.getGrade() > this->getGradeE())
    throw Bureaucrat::GradeTooLowException();
}
