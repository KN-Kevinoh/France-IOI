#include <iostream>
#define repeat(nb) for (int _loop=1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int nb_paires_zones = 0;
   int X_A_min, X_A_max, Y_A_min, Y_A_max, X_B_min, X_B_max, Y_B_min, Y_B_max;
   
   cin >> nb_paires_zones;
   
   repeat (nb_paires_zones)
   {
      cin >> X_A_min >> X_A_max >> Y_A_min >> Y_A_max;
      cin >> X_B_min >> X_B_max >> Y_B_min >> Y_B_max;
      
      if ((X_B_max  <=  X_A_min) || (X_B_min >= X_A_max) || (Y_B_min >= Y_A_max) || 
         ( Y_B_max <= Y_A_min))
      {
         cout << "NON" << endl;
      }
      else
      {
         cout << "OUI" << endl;
      }
   }
  
   return 0;
}