#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Victim.hpp"

class Sorcerer
{
  public:
    Sorcerer();
    Sorcerer(std::string name, std::string title);
    Sorcerer(Sorcerer const & copy);
    ~Sorcerer();
    Sorcerer & operator=(Sorcerer const & over);
    std::string name, title;
    void polymorph(Victim const &vict) const;
    std::string get_title() const;
    void setTitle();
    std::string get_name() const;
    void setName();
};

std::ostream & operator<<(std::ostream &o, Sorcerer const &over);

#endif
