#include <iostream>
#include <string>
#include <fstream>
#include <vector>

/* To compile it use: g++ -o name_your_file name_file.cpp -std=c++11 */

/* Classes prototypes */

class Animal
{

public:
  virtual void makeSound() { std::cout << "The Animal says grr" << std::endl; }

};

class Dog : public Animal
{

public:
  void makeSound() { std::cout << "The Dog says woof" << std::endl; }

};

class Cat : public Animal
{

public:
  void makeSound() { std::cout << "The Dog says meow" << std::endl; }

};

class Car
{

public:
  virtual int getNumWheels() = 0;
  virtual int getNumDoors() = 0;
  

};

class StationWagon : public Car
{

public:
  int getNumWheels(){ std::cout << "Station wagon has 4 wheels" << std::endl; }
  int getNumDoors(){ std::cout << "Station wagon has 4 doors" << std::endl; }
  
  StationWagon(){};
  ~StationWagon(){};

};

int main()
{
  
  Animal *pCat = new Cat;
  Animal *pDog = new Dog;
  
  pCat->makeSound();
  pDog->makeSound();
  
  return(0);

}