#include <iostream>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int nbKarvas = 0;
   int ageKarva = 0;
   int poidsKarva = 0;
   int longueurCorneKarva = 0;
   int hauteurGarrotKarva = 0;
   
   //Entrer nbre Karvas
   cin >> nbKarvas;
   
   repeat (nbKarvas)
   {
     cin >> poidsKarva >> ageKarva >> longueurCorneKarva >> hauteurGarrotKarva;
     cout << longueurCorneKarva * hauteurGarrotKarva + poidsKarva << endl;
   }
   
   return 0;
}