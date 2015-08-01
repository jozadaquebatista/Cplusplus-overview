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
                      
  char myOtherArray[3] = {'a','b','c'};
                      
  /*
  *  the first bracket, represent the value of rows,
  *  so I declared 2 rows for my array,
  *  and the second bracket is my columns value.
  *
  * ILUSTRATION OF THE ARRAY - MYARRAY[2][8]
  * Where number rows is: 2, and columns is: 8.
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

  /* FOR() LOOPS */
  
  for(int i = 1; i <= 10; i++)
  {
  
    std::cout << i << std::endl;
  
  }
  
  return(0);

}