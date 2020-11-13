#include <iostream>
#define repeat(nb) for (int _loop=1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int id_disparue, nb_pers_sortis;
   
   cin >> id_disparue;
   cin >> nb_pers_sortis;
   
   int est_sorti = 0;
   
   repeat (nb_pers_sortis)
   {
      int id_pers;
     
      cin >> id_pers;
      
      if (id_pers == id_disparue)
      {
        est_sorti = 1;
      }
     
   }
   
   if (est_sorti)
   {
      cout << "Sorti de la ville" << endl;
   }
   else
   {
      cout << "Encore dans la ville" << endl;
   }
   
   
   return 0;
 }