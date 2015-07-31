#include <iostream>

/* To compile it use: g++ -o name_your_file name_file.cpp -std=c++11 */

/* +, -, *, // */

int main()
{

  int myAge = 39;
  
  float favNum = 3.141592;
  
  double otherFavNum = 1.6180339887;
  
  int five = 5;

  /*std::cout << "5++=" << five++ << std::endl;
  std::cout << "++5=" << ++five << std::endl;
  std::cout << "5--=" << five-- << std::endl;
  std::cout << "--5=" << --five << std::endl;*/
  
  std::cout << "The result of(1+2-3*4/five): " << 1+2-3*4/five << std::endl;
  
  // We can too casting the result to a float.
  
  std::cout << "The result of((1+2-3*4/five)*54): " << ((float)((1+2-3*4/five)*54)/33) << std::endl;
  
  return(0);

}