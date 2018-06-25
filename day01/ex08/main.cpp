#include <iostream>
#include "Human.hpp"

int main(void)
{
  Human example;
  Human *example1 = &example;

  void (Human::*f)(void) const;
  f = &Human::meleeAttack;
  (example.*f)();
  (example1->*f)();
}
