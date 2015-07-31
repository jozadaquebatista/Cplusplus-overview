#include <iostream>

/* To compile it use: g++ -o name_your_file name_file.cpp -std=c++11 */

int main()
{

  int greetingOption = 2;
  
  switch(greetingOption)
  {
  
    case 1:
      std::cout << "bonjour" << std::endl;
      break;
    case 2:
      std::cout << "Hola" << std::endl;
      break;
    case 3:
      std::cout << "Hello" << std::endl;
      break;
    case 4:
      std::cout << "Olá" << std::endl;
      break;
    default:
      std::cout << "Incorrect Value." << std::endl;
      break;
  
  }
  
  return(0);

}