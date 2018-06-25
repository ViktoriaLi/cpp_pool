#ifndef AWEAPON_HPP
#define AWEAPON_HPP

class AWeapon
{
  private:

  public:
    AWeapon();
    AWeapon(std::string const & usname, int apcost, int damage);
    AWeapon(AWeapon const & copy);
    ~AWeapon();
    AWeapon & operator=(AWeapon const & over);
    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    void attack() const = 0;
  protected:
    std::string name;
    int damage_points, action_points;
};

#endif
