#include <iostream>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop += 2 )
using namespace std;
int main()
{
   int longueur = 17;
   int largeur = 17;
   int hauteur = 17;
   int nbcubes = 0;
   repeat (17)
   {
     nbcubes += (longueur * largeur * hauteur);
     longueur -= 2;
     largeur -= 2;
     hauteur -= 2;
   }
   cout << nbcubes << endl;
   return 0;
}