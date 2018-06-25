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
  private:
    const std::string _name;
    int _grade;
    class Low : public std::exception
    {
    public:
      Low();
      Low(Low const & copy);
      ~Low() throw();
      Low & operator=(Low const & over);
      virtual const char* what() const throw();

    };
    class High : public std::exception
    {
    public:
      High();
      High(High const & copy);
      ~High() throw();
      High & operator=(High const & over);
      virtual const char* what() const throw();
    };

};

std::ostream & operator<<(std::ostream &o, Bureaucrat const &over);

#endif
