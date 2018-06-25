#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
  public:
    Peon();
    Peon(std::string usname);
    Peon(Peon const & copy);
    ~Peon();
    Peon & operator=(Peon const & over);
    void getPolymorphed();
};

std::ostream & operator<<(std::ostream &o, Peon const &over);

#endif
