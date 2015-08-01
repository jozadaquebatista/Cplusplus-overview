#include <iostream>
#include <string>
#include <fstream>
#include <vector>

/* To compile it use: g++ -o name_your_file name_file.cpp -std=c++11 */

int main()
{

  std::string steveQuote = "A day without sunshine is like, you know, night.";
  
  std::ofstream writer("/tmp/SteveQuote.txt");
  
  if(!writer)
  {
  
    std::cout << "Error opening file." << std::endl;
  
  } else {
  
    writer << steveQuote << std::endl;
  
    writer.close();
  
  }
  
  std::ofstream writer2("/tmp/SteveQuote.txt", std::ios::app);
  
  if(!writer2)
  {
  
    std::cout << "Error opening file." << std::endl;
  
  } else {
  
    writer2 << "\n -Steve Martin" << std::endl;
  
    writer2.close();
  
  }
  
  char letter;
  
  std::ifstream reader("/tmp/SteveQuote.txt");
  
  if(! reader)
  {
  
    std::cout << "Error opening file" << std::endl;
  
  } else {
  
    for(int i = 0; ! reader.eof(); i++)
    {
    
      reader.get(letter);
      std::cout << letter;
    
    }
    
    std::cout << std::endl;
    reader.close();
  }
  
  return(0);

}