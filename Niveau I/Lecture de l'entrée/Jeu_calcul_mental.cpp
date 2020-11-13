#include <iostream>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int nbNombres = 0;
   int nbreDepart = 66;
   int cpt = 1;
   
   cin >> nbNombres;
   
   repeat (nbNombres)
   {
       nbreDepart *= cpt;
       cout << nbreDepart << endl;
       cpt++;
   }
      return 0;
}