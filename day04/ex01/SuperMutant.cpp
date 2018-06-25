#include <iostream>
#include "Enemy.hpp"
#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
  type = "Super Mutant";
  hp = 170;
  std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(int hp1, std::string const & type1) : Enemy(hp1, type1)
{

}

SuperMutant::SuperMutant(SuperMutant const & copy)
{
  *this = copy;
}

SuperMutant::~SuperMutant()
{
  std::cout << "Aaargh ..." << std::endl;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & over)
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

void SuperMutant::takeDamage()
{
  if (hp - 3 >= 0)
    hp -= 3;
}
