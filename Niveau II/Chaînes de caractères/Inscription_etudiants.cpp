#include <iostream>
#include <string>
using namespace std;
int main()
{
   string nom;
   
   cin >> nom;
   
   if(nom[0] < 71)
    cout << "1" << endl;
   else if (nom[0] < 81)
    cout << "2" << endl; 
   else
    cout << "3" << endl;  
   
   
   return 0;
}