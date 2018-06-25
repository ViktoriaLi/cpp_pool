#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy
{
  private:

  public:
    RadScorpion();
    RadScorpion(int hp1, std::string const & type1);
    RadScorpion(SuperMutant const & copy);
    ~RadScorpion();
    RadScorpion & operator=(RadScorpion const & over);
    /*std::string getType() const;
    int getHP() const;*/
    void takeDamage();
 };

#endif
