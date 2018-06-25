#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
  private:

  public:
    PowerFist();
    PowerFist(std::string const & usname, int apcost, int damage);
    PowerFist(PlasmaRifle const & copy);
    ~PowerFist();
    PowerFist & operator=(PowerFist const & over);
    //std::string getName() const;
    //int getAPCost() const;
    //int getDamage() const;
    void attack();
};

#endif
