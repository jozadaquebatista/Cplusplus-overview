#include <iostream>
#include <string>
#include <fstream>

/* To compile it use: g++ -o name_your_file name_file.cpp -std=c++11 */

int main()
{

  std::string numberGuessed;
  int intNumberGuessed = 0;
  
  do {
  
    std::cout << "Guess between 1 and 10: ";
    
    getline(std::cin, numberGuessed);
    
    intNumberGuessed = stoi(numberGuessed);
  
  } while(intNumberGuessed != 4);
  
  std::cout << "You win." << std::endl;
  
  return(0);

}