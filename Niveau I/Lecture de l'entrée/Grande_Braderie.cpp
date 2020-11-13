#include <iostream>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int positionDepart = 0;
   int largeurEmplacement = 0;
   int nbVendeurs = 0;
   
   cin >> positionDepart;
   cin >> largeurEmplacement;
   cin >> nbVendeurs;
   
   
   repeat (nbVendeurs + 1)
   {
      cout << positionDepart << endl;
      positionDepart += largeurEmplacement;
   }
   
   return 0;
}