#include <iostream>
#include <string>
#include <fstream>
#include <vector>

/* To compile it use: g++ -o name_your_file name_file.cpp -std=c++11 */

class Animal
{

private:
  int height;
  int weight;
  std::string name;
  
  static int numOfAnimals;
  
public:
  int getHeight(){ return height; }
  int getWeight(){ return weight; }
  std::string getName(){ return name; }
  void setHeight(int cm) { height = cm; }
  void setWeight(int kg) { height = kg; }
  void setName(std::string animalName){ name = animalName; }
  
  /* void setAll(int, int, std::string); */
  
  Animal(int, int, std::string);
  
  ~Animal();
  
  Animal();
  
  static int getNumberOfAnimals(){ return numOfAnimals; }
  
  void toString();

};

int Animal::numOfAnimals = 0;

/*void Animal::setAll(int height, int weight, std::string name)
*{
*
*this->height = height;
*this->weight = weight;
*this->name = name;
*
* Animal::numOfAnimals++;
*
*}
 */

Animal::Animal(int height, int weight, std::string name)
{

  this->height = height;
  this->weight = weight;
  this->name = name;
  
  Animal::numOfAnimals++;

}

Animal::~Animal()
{

  std::cout << "Animal " << this->name << " destroyed" << std::endl;

}

Animal::Animal()
{

  Animal::numOfAnimals++;

}

void Animal::toString()
{

  std::cout << this->name << " is " << this->height << " cms tall and " << this->weight << " weight." << std::endl;

}

class Dog : Animal
{

private:
  std::string sound = "Woof";
  
public:
  void getSound(){ std::cout << sound << std::endl; }
  
  Dog(int,int,std::string,std::string);
  Dog() : Animal(){};
  
  void toString();
  
};

Dog::Dog(int height, int weight, std::string name, std::string bark) : Animal(height, weight, name)
{

  this->sound = bark;

}

void Dog::toString()
{

  std::cout << this->getName() << " is " << this->getHeight() <<
  " cms tall and  " << this->getWeight() << " kgs in weight and says " << this->sound << "." << std::endl;

}

int main()
{
  
  Animal fred;
  
  fred.setHeight(33);
  fred.setWeight(10);
  fred.setName("Fred");
  
  std::cout << fred.getName() << " is " <<
  fred.getHeight() << " kgs n weight" << std::endl;
  
  Animal tom(36, 15, "Tom");
  
  Animal lola(20, 5, "Lola"); // + 1 object of type Animal.
  
  std::cout << tom.getName() << " is " <<
  tom.getHeight() << " kgs n weight" << std::endl;
  
  Dog spot(38,16,"Spot","Woof");
  
  std::cout << "Now you have " << tom.getNumberOfAnimals() << " animals." << std::endl;
  
  spot.getSound();
  tom.toString();
  spot.toString();
  
  //spot.Animal::toString();
  
  return(0);

}