#include <iostream>
#include <string>
#include <fstream>
#include <vector>

/* To compile it use: g++ -o name_your_file name_file.cpp -std=c++11 */

int main()
{

  int number = 0;
  
  try{
  
    if(number != 0){
    
      std::cout << 2/number << std::endl;
    
    } else throw(number);
    
  } catch(int number) {
  
    std::cout << number << " is not valid" << std::endl;
  
  }
  
  return(0);

}