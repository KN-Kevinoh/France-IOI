#include <iostream>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int nbBonbons = 0;
   int cpt = 0;
   repeat (50)
   {
      cpt++;
      nbBonbons += cpt;
      cout << nbBonbons << endl;
   }
   return 0;
}