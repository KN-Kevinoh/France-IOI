#include <iostream>

using namespace std;

int main()
{
   int nb_mesures = 0;
   int temperature_min = 0;
   int temperature_max = 0;
   
   cin >> nb_mesures >> temperature_min >> temperature_max;
   
   while(nb_mesures > 0)
   {
      int mesure;
      cin >> mesure;
      
      if(mesure >= temperature_min && mesure <= temperature_max )
      {
         cout << "Rien à signaler" << endl;
      }
      else
      {
         cout << "Alerte !!" << endl;
         break;
      }
      
      nb_mesures--;
   }
   
   return 0;
}