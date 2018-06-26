#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
  std::cout << "Case 1" << std::endl;
  try
  {
    Bureaucrat Carol("Carol", 150);
    ShrubberyCreationForm Form1("form");
    Form1.execute(Carol);
    Form1.beSigned(Carol);
  }
  catch(Form::GradeTooLowException &e)
  {
    std::cout << e.what() << std::endl;
  }
  catch(Form::CannotExecute &e)
  {
    std::cout << e.what() << std::endl;
  }

  std::cout << "Case 2" << std::endl;
  try
  {
    Bureaucrat Carol("Carol", 146);
    ShrubberyCreationForm Form1("form");
    Form1.beSigned(Carol);
    Form1.execute(Carol);
  }
  catch(Form::GradeTooLowException &e)
  {
    std::cout << e.what() << std::endl;
  }
  catch(Form::CannotExecute &e)
  {
    std::cout << e.what() << std::endl;
  }

  std::cout << "Case 3" << std::endl;
  try
  {
    Bureaucrat Carol("Carol", 100);
    ShrubberyCreationForm Form1("form");
    Form1.beSigned(Carol);
    Form1.execute(Carol);
  }
  catch(Form::GradeTooLowException &e)
  {
    std::cout << e.what() << std::endl;
  }
  catch(Form::CannotExecute &e)
  {
    std::cout << e.what() << std::endl;
  }

  std::cout << "Case 4" << std::endl;
  try
  {
    Bureaucrat Carol("Carol", 30);
    RobotomyRequestForm Form1("form");
    Form1.beSigned(Carol);
    Form1.execute(Carol);
    Form1.execute(Carol);
  }
  catch(Form::GradeTooLowException &e)
  {
    std::cout << e.what() << std::endl;
  }
  catch(Form::CannotExecute &e)
  {
    std::cout << e.what() << std::endl;
  }

  std::cout << "Case 5" << std::endl;
  try
  {
    Bureaucrat Carol("Carol", 30);
    PresidentialPardonForm Form1("form");
    Form1.beSigned(Carol);
    Form1.execute(Carol);
  }
  catch(Form::GradeTooLowException &e)
  {
    std::cout << e.what() << std::endl;
  }
  catch(Form::CannotExecute &e)
  {
    std::cout << e.what() << std::endl;
  }

  std::cout << "Case 6" << std::endl;
  try
  {
    Bureaucrat Carol("Carol", 150);
    ShrubberyCreationForm Form1("form");
    Carol.executeForm(Form1);
    Form1.beSigned(Carol);
  }
  catch(Form::GradeTooLowException &e)
  {
    std::cout << e.what() << std::endl;
  }
  catch(Form::CannotExecute &e)
  {
    std::cout << e.what() << std::endl;
  }

  std::cout << "Case 7" << std::endl;
  try
  {
    Bureaucrat Carol("Carol", 146);
    ShrubberyCreationForm Form1("form");
    Form1.beSigned(Carol);
    Carol.executeForm(Form1);
  }
  catch(Form::GradeTooLowException &e)
  {
    std::cout << e.what() << std::endl;
  }
  catch(Form::CannotExecute &e)
  {
    std::cout << e.what() << std::endl;
  }

  std::cout << "Case 8" << std::endl;
  try
  {
    Bureaucrat Carol("Carol", 100);
    ShrubberyCreationForm Form1("form");
    Form1.beSigned(Carol);
    Carol.executeForm(Form1);
  }
  catch(Form::GradeTooLowException &e)
  {
    std::cout << e.what() << std::endl;
  }
  catch(Form::CannotExecute &e)
  {
    std::cout << e.what() << std::endl;
  }

  std::cout << "Case 9" << std::endl;
  try
  {
    Bureaucrat Carol("Carol", 30);
    RobotomyRequestForm Form1("form");
    Form1.beSigned(Carol);
    Carol.executeForm(Form1);
  }
  catch(Form::GradeTooLowException &e)
  {
    std::cout << e.what() << std::endl;
  }
  catch(Form::CannotExecute &e)
  {
    std::cout << e.what() << std::endl;
  }

  std::cout << "Case 10" << std::endl;
  try
  {
    Bureaucrat Carol("Carol", 30);
    PresidentialPardonForm Form1("form");
    Form1.beSigned(Carol);
    Carol.executeForm(Form1);
  }
  catch(Form::GradeTooLowException &e)
  {
    std::cout << e.what() << std::endl;
  }
  catch(Form::CannotExecute &e)
  {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
