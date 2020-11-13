#include <iostream>
using namespace std;
int main()
{
   int arigon = 0;
   int evaran = 0;
   
   cin >> arigon >> evaran;
   
   int ecart = arigon - evaran;
   
   if ( ecart > 10 ) 
   {
      cout << "La famille Arignon a un champ trop grand" << endl;
   }
   
   if ( ecart < -10 ) 
   {
      cout << "La famille Evaran a un champ trop grand" << endl;
   }
   
   return 0;
}