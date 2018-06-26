#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
   std::cout << "Case 1" << std::endl;
   try
   {
     Bureaucrat Student1("Carl", 1);
     try
     {
       std::cout << "Case 1.1" << std::endl;
       Student1.gradeIncr();
     }
     catch(Bureaucrat::GradeTooHighException &e)
     {
        std::cout << e.what() << std::endl;
     }
   }
   catch(Bureaucrat::GradeTooHighException &e)
   {
      std::cout << e.what() << std::endl;
   }
   catch(Bureaucrat::GradeTooLowException &e)
   {
      std::cout << e.what() << std::endl;
   }

   std::cout << "Case 2" << std::endl;
   try
   {
     Bureaucrat Student2("Carl", 0);
   }
   catch(Bureaucrat::GradeTooHighException &e)
   {
      std::cout << e.what() << std::endl;
   }
   catch(Bureaucrat::GradeTooLowException &e)
   {
      std::cout << e.what() << std::endl;
   }

   std::cout << "Case 3" << std::endl;
   try
   {
     Bureaucrat Student3("Carl", 151);
   }
   catch(Bureaucrat::GradeTooHighException &e)
   {
      std::cout << e.what() << std::endl;
   }
   catch(Bureaucrat::GradeTooLowException &e)
   {
      std::cout << e.what() << std::endl;
   }

   std::cout << "Case 4" << std::endl;
   try
   {
     Bureaucrat Student4("Carl", 151);
     Student4.gradeDecr();
   }
   catch(Bureaucrat::GradeTooLowException &e)
   {
      std::cout << e.what() << std::endl;
   }

   std::cout << "Case 5" << std::endl;
   Bureaucrat Student1("Carl", 1);
   std::cout << Student1;
   return 0;
}
