#include <iostream>
#define PIED_TO_METER 0.3048
#define GRAMME_TO_LIVRE  0.002205

using namespace std;

void convertion (double valeur, char unite)
{
   double resultat = 0;
   
   switch (unite)
   {
      case 'm': resultat = valeur / PIED_TO_METER;
                cout << resultat << " " << 'p' << endl;
                break;
      case 'g': resultat = valeur * GRAMME_TO_LIVRE;
                cout << resultat << " " << 'l' << endl;
                break;
      case 'c': resultat = 32 + 1.8 * valeur;
                cout << resultat << " " << 'f' << endl;
                break;
   }
}

int main()
{
   int nb_mesures;
   
   cin >> nb_mesures;
   
   for(int i = 0; i < nb_mesures; i = i + 1)
   {
      double valeur;
      char unite;
      
      cin >> valeur >> unite;
      
      convertion ( valeur, unite );
   }
     
   return 0;
}