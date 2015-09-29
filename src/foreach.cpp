#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char **argv)
{
    setlocale(0, "pt-br");
    
    string names[] = {"Jesus", "Maria", "Jose"};
    
    for(string name : names)
    {
        cout << name << endl;   
    }
    
    cout << "\t--------------------Fim da linha-------------------- " << endl;
    
}
