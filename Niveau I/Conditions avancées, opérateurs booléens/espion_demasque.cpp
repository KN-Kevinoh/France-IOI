#include <iostream>
#define repeat(nb) for (int _loop=1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int nb_pers;
   cin >> nb_pers;
      
   const int contrainte_taille_min = 178;
   const int contrainte_taille_max = 182;
   const int contrainte_age = 34;
   const int contrainte_poids = 70;
   
   repeat (nb_pers)
   {
      int taille, age, poids, avoir_cheval, avoir_cheveux_bruns;
      cin >> taille >> age >> poids >> avoir_cheval >> avoir_cheveux_bruns;
   
      int nb_contraintes_verifiees = 0;
      
      if ( (taille >= contrainte_taille_min) && (taille <= contrainte_taille_max) )
      {
        nb_contraintes_verifiees++;
      }
      
      if ( age >= contrainte_age )
      {
         nb_contraintes_verifiees++;
      }
      
      if ( poids < contrainte_poids )
      {
         nb_contraintes_verifiees++;
      }
      
      if ( !avoir_cheval)
      {
         nb_contraintes_verifiees++;
      }
      
      if ( avoir_cheveux_bruns )
      {
         nb_contraintes_verifiees++;
      }
      
      // possibilités être espion
    
      switch ( nb_contraintes_verifiees )
      {
         case 5: cout << "Très probable" << endl; break;
         case 4: cout << "Probable" << endl; break;
         case 3: cout << "Probable" << endl; break;
         case 0: cout << "Impossible" << endl; break;
         default: cout << "Peu probable" << endl; break;
      } 
      
   }
   
   return 0;
 }