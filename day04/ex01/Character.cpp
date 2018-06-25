#include <iostream>
#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"

Character::Character()
{
  action_points = 40;
  weap = NULL;
}

Character::Character(std::string const & usname) : name(usname), action_points(40), weap(NULL)
{

}

Character::Character(Enemy const & copy)
{
  *this = copy;
}

Character::~Character()
{

}

Character & Character::operator=(Character const & over)
{
  if (this != &over)
  {
    this->type = over.type;
    this->hp = over.hp;
  }
  return (*this);
}

void Character::recoverAP()
{
  if (action_points + 10 <= 40)
    action_points += 10;
  else
    action_points = 40;
}
void Character::equip(AWeapon* weap)
{

}

void Character::attack(Enemy *en)
{
  std::cout << en.name << " attacks " << en.type << " with a " << weap.name << std::endl;
}

std::string Character::getName() const
{
  return this->name;
}

std::ostream & operator<<(std::ostream & o, Character const & over)
{
  o << over.name << " has " << action_points << "  and wields a " <<  weap.name << std::endl;
  return o;
}
