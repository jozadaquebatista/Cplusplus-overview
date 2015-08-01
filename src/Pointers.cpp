#include <iostream>
#include <string>
#include <fstream>
#include <vector>

/* To compile it use: g++ -o name_your_file name_file.cpp -std=c++11 */

void makeMeYoung(int *age)
{

  std::cout << "I used to be " << *age << std::endl;
  *age = 21;

}

void actYourAge(int &age)
{

  age = 29;

}

int main()
{

  int myAge = 39;
  char myGrade = 'A';
  
  std::cout << "Size of int " << sizeof(myAge) << std::endl;
  std::cout << "Size of char " << sizeof(myGrade) << std::endl;
  
  std::cout << "myAge is located at " << &myAge << std::endl;
  
  int *agePtr = &myAge;
  
  std::cout << "Address of pointer " << agePtr << std::endl;
  
  std::cout << "Data at nemory address " << *agePtr << std::endl;
  
  int badNums[5] = {4,13,14,24,34};
  
  int *numArrayPtr = badNums;
  
  std::cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << std::endl;
  
  numArrayPtr++;
  
  std::cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << std::endl;
  
  std::cout << "Address " << badNums << " Value " << *badNums << std::endl;
  
  makeMeYoung(&myAge);
  
  std::cout << "I'm " << myAge << " years old now." << std::endl;
  
  int &ageRef = myAge;
  
  std::cout << "myAge : " << myAge << std::endl;
  
  actYourAge(ageRef);
  
  /* Changing value of var using functions */
  
    std::cout << "myAge : " << myAge << std::endl;
    
  
  return(0);

}