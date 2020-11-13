#include <iostream>

using namespace std;

int main()
{
   int nb_pierres_disponibles = 0;
   int nb_pierres_necessaires = 0;
   int hauteur_max = 0;
   
   cin >> nb_pierres_disponibles;
   
   while (nb_pierres_disponibles > 0)
   {
      hauteur_max++;
      nb_pierres_necessaires += (hauteur_max * hauteur_max);
      nb_pierres_disponibles -= (hauteur_max * hauteur_max);
   }
   
   if ( nb_pierres_disponibles < 0)
   {
      // annuler la dernière itération
      nb_pierres_necessaires -= (hauteur_max * hauteur_max);
      hauteur_max--;
   }
   
   cout << hauteur_max << endl << nb_pierres_necessaires << endl;
   
   return 0;
}
