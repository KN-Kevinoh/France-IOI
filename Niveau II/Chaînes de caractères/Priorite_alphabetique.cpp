#include <iostream>
#include <string>

using namespace std;

int main()
{
   string nom1;
   string nom2;
   
   getline(cin, nom1);
   getline(cin, nom2);
   
   if (nom1 < nom2)
   {
      cout << nom1 << endl;
   }
   
   if (nom1 > nom2)
   {
       cout << nom2 << endl;
   }
   
   return 0;
}