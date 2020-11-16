#include <iostream>

using namespace std;

int main ()
{
   double epaisseur_init =  0.110;
   
   for(int i = 0; i < 15; i++)
   {
      epaisseur_init *= 2;
   }
   
   cout << epaisseur_init / 10;
   
   return 0 ;
}