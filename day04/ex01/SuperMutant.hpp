#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant: public Enemy
{
  private:

  public:
    SuperMutant();
    SuperMutant(int hp1, std::string const & type1);
    SuperMutant(SuperMutant const & copy);
    ~SuperMutant();
    SuperMutant & operator=(SuperMutant const & over);
    /*std::string getType() const;
    int getHP() const;*/
    void takeDamage();
 };

#endif
