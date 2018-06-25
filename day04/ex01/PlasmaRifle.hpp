#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
  private:

  public:
    PlasmaRifle();
    PlasmaRifle(std::string const & usname, int apcost, int damage);
    PlasmaRifle(PlasmaRifle const & copy);
    ~PlasmaRifle();
    PlasmaRifle & operator=(PlasmaRifle const & over);
    //std::string getName() const;
    //int getAPCost() const;
    //int getDamage() const;
    void attack();
};

#endif
