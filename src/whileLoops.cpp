#include <iostream>

/* To compile it use: g++ -o name_your_file name_file.cpp -std=c++11 */

int main()
{

  int randNum = (rand() % 100) + 1;
  
  while(randNum != 100)
  {
  
    std::cout << randNum << ", ";
    
    randNum =  (rand() % 100) + 1;
  }
  std::cout << randNum << "."  << std::endl;
  return(0);

}