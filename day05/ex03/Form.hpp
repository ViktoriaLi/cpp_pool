#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
  public:
    Form();
    Form(std::string usName, int usGradeS, int usGradeE);
    Form(Form const & copy);
    ~Form();
    Form & operator=(Form const & over);

    std::string getName() const;
    std::string getTarget() const;
    int getGradeS() const;
    int getGradeE() const;
    bool getiIfSigned() const;

    void setiIfSigned(bool sign);

    void beSigned(Bureaucrat & Burea);
    virtual void execute(Bureaucrat const & executor) const = 0;
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
    class AlreadySigned : public std::exception
    {
      public:
        AlreadySigned();
        AlreadySigned(AlreadySigned const & copy);
        ~AlreadySigned() throw();
        AlreadySigned & operator=(AlreadySigned const & over);
        virtual const char* what() const throw();
    };
    class CannotExecute : public std::exception
    {
      public:
        CannotExecute();
        CannotExecute(CannotExecute const & copy);
        ~CannotExecute() throw();
        CannotExecute & operator=(CannotExecute const & over);
        virtual const char* what() const throw();
    };
  private:
    const std::string _name;
    const int _grade_s, _grade_e;
    bool _if_signed;
    std::string _target;
};

std::ostream & operator<<(std::ostream &o, Form const &over);

#endif
