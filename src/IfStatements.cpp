#include <iostream>

/* To compile it use: g++ -o name_your_file name_file.cpp -std=c++11 */

/* +, -, *, // */

int main()
{

  /* We have comparison operators, that is ==, !=, >=, <= */
  
  int age = 70;
  int ageAtLastExam = 16;
  bool isNotIntoxicated = true;
  
  if((age >= 1) && (age < 16))
  {
  
    std::cout << "You can't drive." << std::endl;
  
  } else if(! isNotIntoxicated){
  
    std::cout << "You can't drive." << std::endl;
  
  } else if(age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5))){
  
      std::cout << "You can drive." << std::endl;
  
  } else {
  
      std::cout << "You can drive." << std::endl;
  
  }
  
  return(0);

}