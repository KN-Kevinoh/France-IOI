#include <iostream>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int largeurNiveauSol = 0;
   int largeurFaceSup = 0;
   int volumeSocle = 0;
   
   cin >> largeurNiveauSol;
   cin >> largeurFaceSup;
   
   repeat (largeurNiveauSol - largeurFaceSup + 1)
   {
      volumeSocle += (largeurNiveauSol * largeurNiveauSol);
      largeurNiveauSol--;
   }
   
    cout << volumeSocle << endl;
    
    return 0;
}