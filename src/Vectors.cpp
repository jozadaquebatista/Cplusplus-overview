#include <iostream>
#include <string>
#include <fstream>
#include <vector>

/* To compile it use: g++ -o name_your_file name_file.cpp -std=c++11 */

int main()
{

  std::vector <int> lotteryNumVect(10);
  
  int lotteryNumArray[5] = {4, 13, 14, 24, 34};
  
  lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray+3);
  
  std::cout << lotteryNumVect.at(2) << std::endl;
  
  lotteryNumVect.insert(lotteryNumVect.begin()+5, 44);
  
  std::cout << lotteryNumVect.at(5) << std::endl;
  
  lotteryNumVect.push_back(64);
  
  std::cout << "Final Value " << lotteryNumVect.back() << std::endl;
  
  lotteryNumVect.pop_back();
  std::cout << "Final Value " << lotteryNumVect.at(4) << std::endl;
  
  
  
  return(0);

}