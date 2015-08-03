#include <iostream>
#include <string>
#include <fstream>
#include <vector>

/* To compile it use: g++ -o name_your_file name_file.cpp -std=c++11 */

/* Classes prototypes */

class Animal
{

public:
  void getFamily()
  {
  
    std::cout << "We are animals" << std::endl;  
  }
  
  virtual void getClass()
  {
    
    std::cout << "I'm an animal" << std::endl;
    
  }

};

class Dog : public Animal
{

public:
  void getClass()
  {    
    std::cout << "I'm a Dog" << std::endl;
    
  }
  
};

class GermanShepard : public Dog
{

public:
  void getClass()
  {
  
    std::cout << "I'm a German Shepard" << std::endl;
  
  }
  void getDerived()
  {
  
    std::cout << "I'm an Animal and Dog" << std::endl;
  
  }

};

void whatClassAreYou(Animal *animal)
{

  animal->getClass();

}

int main()
{

  Animal *animal = new Animal;
  Dog *dog = new Dog;
  
  animal->getClass();
  dog->getClass();  
  
  whatClassAreYou(animal);
  whatClassAreYou(dog);
  
  Dog spot;
  GermanShepard max;
  
  Animal *ptrDog = &spot;
  Animal *ptrGShepard = &max;
  
  ptrDog -> getFamily();
  
  ptrDog -> getClass();
  
  return(0);

}