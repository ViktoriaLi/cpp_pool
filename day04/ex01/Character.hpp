#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
  private:
  public:
    Character();
    Character(std::string const & name);
    Character(Character const & copy)
    ~Character();
    Character & operator=(Character const & over);
    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);
    std::string getName() const;
    std::string name;
    int action_points;
    AWeapon *weap;
};

std::ostream & operator<<(std::ostream &o, Character const &over);

#endif
