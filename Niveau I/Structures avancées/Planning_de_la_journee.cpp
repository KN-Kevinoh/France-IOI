#include <iostream>
#include <cstdlib>
#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
using namespace std;
int main()
{
   int positionActuelle = 0;
   int nbVillages = 0;
   int nbVillageDistanceRaisonnable = 0;
   cin >> positionActuelle >> nbVillages;
   
   int positionVillage = 0;
   int ecart = 0;
   repeat(nbVillages)
   {
      cin >> positionVillage;
      ecart = abs(positionActuelle - positionVillage);
      if( ecart <= 50)
      {
        nbVillageDistanceRaisonnable++;
      }
      
   }
   cout << nbVillageDistanceRaisonnable;
}