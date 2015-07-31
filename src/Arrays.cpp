#include <iostream>

/* To compile it use: g++ -o name_your_file name_file.cpp -std=c++11 */

int main()
{

  int myFavNums[5];
  
  int badNums[5] = {4,13,14,24,34}; // An unidimensional Array
  
  std::cout << "Bad Number 1: " << badNums[0] << std::endl;
  std::cout << "Bad Number 2: " << badNums[1] << std::endl;
  std::cout << "Bad Number 3: " << badNums[2] << std::endl;
  
  /* Now let's take a look at a two dimensinal array. */
  char myName[2][9] = {{'J', 'o', 'z', 'a', 'd', 'a', 'q', 'u', 'e'},
                       {'B', 'a', 't','i', 's', 't', 'a'}};
                       
  /*
  *  the first bracket, represent the value of rows, so, I declared 2 rows for,
  *  my array, and the second bracket is my columns value.
  *
  * ILUSTRATION OF THE ARRAY
  *
  * MY ARRAY WILL'BE LIKE THIS
  * 
  * [...][...][...][...][...][...][...][...][...]
  * [...][...][...][...][...][...][...][...][...]
  * 
  *
   */                     
  
  std::cout << "My name is: " << myName[0] << " " << myName[1] << std::endl;                     
  
  std::cout << "2nd letter in 2nd array is " << myName[1][1] << std::endl;
  
  return(0);

}