#include <iostream>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int Multiplicateur = 1;
   int eltMultiplier = 1; 
   repeat (20)
   {  
      repeat (20)
      {
        cout << eltMultiplier * Multiplicateur  << " ";
        eltMultiplier +=  1;
      }
      //incrementer au multiplicateur suivant
      Multiplicateur++;
      //reinitialisation à 1
      eltMultiplier = 1;
      cout << "" << endl;
   }
}