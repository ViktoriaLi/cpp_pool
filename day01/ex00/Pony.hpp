#ifndef PONY_HPP
#define PONY_HPP

# include <iostream>

class Pony {
  public:
    Pony(std::string username);
    ~Pony();
    std::string name;
    std::string age;
    std::string color;
    std::string type;
    std::string country;
    void ponyOnTheHeap();
    void ponyOnTheStack();
};

#endif