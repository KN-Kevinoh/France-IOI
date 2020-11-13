#include <iostream>
#include <cstdlib>
#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
using namespace std;
int main()
{
   int nbMarchands = 0;
   int position = 0;
   int prix = 0;
   int min_prix = 1000 * 1000;
   
   cin >> nbMarchands ;
   int pos_min = 0;
   repeat(nbMarchands)
   {
      cin >> prix;
      position++;
      
      if (min_prix >= prix)
      {
         min_prix = prix;
         pos_min = position;
      }
      
   }
   cout << pos_min << endl;
   return 0;
}