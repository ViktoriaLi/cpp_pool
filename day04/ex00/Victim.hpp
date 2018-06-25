#ifndef VICTIM_HPP
#define VICTIM_HPP

class Victim
{
  public:
    Victim();
    Victim(std::string name);
    Victim(Victim const & copy);
    ~Victim();
    Victim & operator=(Victim const & over);
    std::string name;
    virtual void getPolymorphed() const;
    std::string get_name() const;
    void setName();
};

std::ostream & operator<<(std::ostream &o, Victim const &over);

#endif
