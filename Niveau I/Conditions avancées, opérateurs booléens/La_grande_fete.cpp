#include <iostream>
#define repeat(nb) for (int _loop=1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int dFete, fFete, nb_pers;
   int nb_suspects = 0;
   
   cin >>  dFete >> fFete >> nb_pers;
   
   repeat (nb_pers)
   {
      int dArrivee_pers, dDepart_pers;
      cin >> dArrivee_pers >> dDepart_pers;
      
      if (  !( ( dArrivee_pers > fFete ) || ( dDepart_pers < dFete ) ) )
      {
         nb_suspects ++;
      }
     
   }
   
   cout << nb_suspects;
   
   return 0;
 }