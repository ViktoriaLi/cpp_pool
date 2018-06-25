#ifndef ENEMY_HPP
#define ENEMY_HPP

class Enemy {
  private:

  public:
    Enemy();
    Enemy(int hp1, std::string const & type1);
    Enemy(Enemy const & copy);
    ~Enemy();
    Enemy & operator=(Enemy const & over);
    std::string getType() const;
    int getHP() const;
    virtual void takeDamage(int);
 };

#endif
