#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
  public:
    Bureaucrat();
    Bureaucrat(std::string usName, int usGrade);
    Bureaucrat(Bureaucrat const & copy);
    ~Bureaucrat();
    Bureaucrat & operator=(Bureaucrat const & over);
    std::string getName() const;
    int getGrade() const;
    void gradeIncr();
    void gradeDecr();
    class GradeTooLowException : public std::exception
    {
    public:
      GradeTooLowException();
      GradeTooLowException(GradeTooLowException const & copy);
      ~GradeTooLowException() throw();
      GradeTooLowException & operator=(GradeTooLowException const & over);
      virtual const char* what() const throw();

    };
    class GradeTooHighException : public std::exception
    {
    public:
      GradeTooHighException();
      GradeTooHighException(GradeTooHighException const & copy);
      ~GradeTooHighException() throw();
      GradeTooHighException & operator=(GradeTooHighException const & over);
      virtual const char* what() const throw();
    };
  private:
    const std::string _name;
    int _grade;
};

std::ostream & operator<<(std::ostream &o, Bureaucrat const &over);

#endif
