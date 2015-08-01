#include <iostream>
#include <string>
#include <fstream>

/* To compile it use: g++ -o name_your_file name_file.cpp -std=c++11 */

int main()
{

  char happyArray[6] = {'H', 'a','p','p','y','\0'};
  
  std::string birthDayString = " Birthday";
  
  std::cout << happyArray + birthDayString << std::endl;
  
  std::string yourName;
  std::cout << "What is your name: " << std::endl;
  getline(std::cin, yourName);
  
  std::cout << "hello " << yourName << std::endl;
  
  double eulersConstant = .57721;
  std::string eulerGuess;
  double eulerGuessDouble;
  
  std::cout << "What is the Euler's constant? ";
  getline(std::cin, eulerGuess);
  
  eulerGuessDouble = std::stod(eulerGuess);
  
  if(eulerGuessDouble == eulersConstant)
  {
  
    std::cout << "You are right" << std::endl;
  
  } else {
  
    std::cout << "You are wrong" << std::endl;
  
  }
  
  std::cout << "Size of String " << eulerGuess.size() << std::endl;
  std::cout << "Is string empty " << eulerGuess.empty() << std::endl;
  std::cout << eulerGuess.append(" was your guess") << std::endl;
  
  std::string dogString = "dog";
  std::string catString = "cat";
  
  std::cout << dogString.compare(dogString) << std::endl;
  std::cout << dogString.compare(catString) << std::endl;
  std::cout << catString.compare(dogString) << std::endl;
  
  std::string wholeName = yourName.assign(yourName);
  std::cout << wholeName << std::endl;
  
  std::string firstName = wholeName.assign(wholeName, 0, 9);
  std::cout << firstName << std::endl;
  
  int lastNameIndex = yourName.find("batista", 0);
  std::cout << "Index for last name " << lastNameIndex << std::endl;
  
  yourName.insert(10, "LoL ");
  std::cout << yourName << std::endl;
  
  yourName.erase(10, 13);
  std::cout << yourName << std::endl;
  
  yourName.replace(10, 6, "Maximus");
  std::cout << yourName << std::endl;
  
  return(0);

}