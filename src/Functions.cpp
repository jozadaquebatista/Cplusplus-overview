#include <iostream>
#include <string>
#include <fstream>
#include <vector>

/* To compile it use: g++ -o name_your_file name_file.cpp -std=c++11 */

int addNumbers(int firstNum, int secondNum = 0)
{
  
    int combinedValue = firstNum + secondNum;
    
    return combinedValue;
  
 }

int addNumbers(int firstNum, int secondNum, int thirdNum)
{
  
    int combinedValue = firstNum + secondNum + thirdNum;
    
    return combinedValue;
  
}

int main()
{

  std::cout << addNumbers(1) << std::endl;
  std::cout << addNumbers(1,5,6) << std::endl;
  
  return(0);

}