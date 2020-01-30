//Mica Marietta
//2318435
//CPSC 298
//assignment 3

#include <iostream>
#include <string>
using namespace std;

class Pet{
public:
  Pet();
  Pet(string name, int age, string type, double weight);

//accessors
  string getName();
  int getAge();
  string getType();
  double getWeight();

//mutators
  void setName(string name);
  void setAge(int age);
  void setType(string type);
  void setWeight(double weight);

private:
  //attributes of the object
  string m_name;
  unsigned int m_age;
  string m_type;
  double m_weight;
};
