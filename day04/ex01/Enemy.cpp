#include <iostream>
#include "Enemy.hpp"

Enemy::Enemy()
{
  type = getType()
  hp = getHP();
}

Enemy::Enemy(int hp1, std::string const & type1) hp(hp), type(type)
{

}

Enemy::Enemy(Enemy const & copy)
{
  *this = copy;
}

Enemy::~Enemy()
{

}

Enemy & Enemy::operator=(Enemy const & over)
{
  if (this != &over)
  {
    this->type = over.type;
    this->hp = over.hp;
  }
  return (*this);
}

std::string Enemy::getType() const
{
  return this->type;
}

int Enemy::getHP() const
{
  return this->hp;
}

void Enemy::takeDamage(int a);
{
  if (hp - a >= 0)
    hp -= a;
}
