#include <iostream>
#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
  std::cout << "Function 1" << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
  std::cout << "Function 2" << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
  std::cout << "Function 3" << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{

}
