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

int getFactorial(int number)
{

  int sum;
  if(number == 1) sum = 1;
  else sum = (getFactorial(number - 1) * number);

  return sum;
  
}

int main()
{

  std::cout << addNumbers(1) << std::endl;
  std::cout << addNumbers(1,5,6) << std::endl;
  
  std::cout << "The factorial of 3 is " << getFactorial(3) << std::endl;
  
  return(0);

}