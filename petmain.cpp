//Mica Marietta
//2318435
//CPSC 298
//assignment 3

#include "pet.h"
#include <iostream>

int main(int argv, char **argc){

//instantiate pet objects
  Pet *p1 = new Pet();
  Pet *p2 = new Pet();

//use mutators to set the name, age, type, and weight
  p1->setName("Boo");
  p2->setName("Carmel");

  p1->setAge(5);
  p2->setAge(15);

  p1->setType("Cat");
  p2->setType("Dog");

  p1->setWeight(5);
  p2->setWeight(10);

  //use accessors to print out the various aspects of the pets
  cout << p1->getName() << ": " << p1->getAge() << " years old, " << p1->getType() << ", " << p1->getWeight() << " pounds." << endl;
  cout << p2->getName() << ": " << p2->getAge() << " years old, " << p2->getType() << ", " << p2->getWeight() << " pounds." << endl;

  return 0;
}
