#include <iostream>

/* To compile it use: g++ -o name_your_file name_file.cpp -std=c++11 */

/* +, -, *, // */

int main()
{

  int myAge = 39;
  
  float favNum = 3.141592;
  
  double otherFavNum = 1.6180339887;
  
  int five = 5;

  std::cout << "5++=" << five++ << std::endl;
  std::cout << "++5=" << ++five << std::endl;
  std::cout << "5--=" << five-- << std::endl;
  std::cout << "--5=" << --five << std::endl;
  
  return(0);

}