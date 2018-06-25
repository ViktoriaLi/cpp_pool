#include <iostream>
#include "Enemy.hpp"
#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
{
  type = "RadScorpion";
  hp = 80;
  std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(int hp1, std::string const & type1) : Enemy(hp1, type1)
{

}

RadScorpion::RadScorpion(SuperMutant const & copy)
{
  *this = copy;
}

RadScorpion::~RadScorpion()
{
  std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion & RadScorpion::operator=(RadScorpion const & over)
{
  if (this != &over)
  {
    this->type = over.type;
    this->hp = over.hp;
  }
  return (*this);
}

/*std::string Enemy::getType() const
{
  return this->type;
}

int Enemy::getHP() const
{
  return this->hp;
}*/

void RadScorpion::takeDamage();
{
  if (hp - 3 >= 0)
    hp -= 3;
}
