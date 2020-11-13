#include <iostream>
#include <cstdlib>
#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
using namespace std;
int main()
{
   int min_x = 0;
   int max_x = 0;
   int min_y = 0;
   int max_y = 0;
   int nbMaisons = 0;
   
   cin >> min_x >> max_x >> min_y >> max_y >> nbMaisons;
   int x = 0;
   int y = 0;
   int nbMaisonEspions = 0;
   repeat(nbMaisons)
   {
     cin >> x >> y;
     if ( x >= min_x && x <= max_x)
     {
         if ( y >= min_y && y <= max_y)
        {
           nbMaisonEspions++;
        }
     }
      
   }
  
   cout << nbMaisonEspions << endl;
   
   return 0;
}