#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
  std::cout << "Case 1" << std::endl;
  Form Form("form", 1, 12);
  try
  {
    Bureaucrat Student1("Carl", 1);
    Form.beSigned(Student1);
    Form.beSigned(Student1);
  }
  catch(Bureaucrat::GradeTooLowException &e)
  {
    std::cout << e.what() << std::endl;
  }
  catch(Form::AlreadySigned &e)
  {
    std::cout << e.what() << std::endl;
  }

  std::cout << "Case 2" << std::endl;
  try
  {
    Bureaucrat Student1("Carl", 1);
    Student1.signForm(Form);
  }
  catch(Bureaucrat::GradeTooLowException &e)
  {
     std::cout << e.what() << std::endl;
  }
  catch(Form::AlreadySigned &e)
  {
     std::cout << e.what() << std::endl;
  }

  std::cout << "Case 3" << std::endl;
  class Form Form1("form", 1, 12);
  try
  {
    Bureaucrat Student1("Carl", 1);
    Student1.signForm(Form1);
  }
  catch(Bureaucrat::GradeTooLowException &e)
  {
     std::cout << e.what() << std::endl;
  }
  catch(Form::AlreadySigned &e)
  {
     std::cout << e.what() << std::endl;
  }

  std::cout << "Case 4" << std::endl;
  class Form Form2("form", 1, 12);
  try
  {
    Bureaucrat Student1("Carl", 2);
    Student1.signForm(Form2);
  }
  catch(Bureaucrat::GradeTooLowException &e)
  {
     std::cout << e.what() << std::endl;
  }
  catch(Form::AlreadySigned &e)
  {
     std::cout << e.what() << std::endl;
  }
  return 0;
}
