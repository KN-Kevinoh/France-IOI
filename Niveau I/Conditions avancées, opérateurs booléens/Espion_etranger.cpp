#include <iostream>
#include <cstdlib>
#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
using namespace std;
int main()
{
   int dateDeb = 0;
   int dateFin = 0;
   int nbPers = 0;
   
   cin >> dateDeb >> dateFin >> nbPers;
   
   int datePers = 0;
   int nbEspions = 0;
   repeat(nbPers)
   {
       cin >> datePers;
       if ( datePers >= dateDeb)
       {
          if ( datePers <= dateFin)
          {
             nbEspions++;
          }
       }
      
   }
   
   cout << nbEspions << endl;
   
   return 0;
}