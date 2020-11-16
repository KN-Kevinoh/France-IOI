#include <iostream>
#define NB_LETTRES 26
using namespace std;


void drawCaracter(char carac, int nb_fois)
{
   for(int i = 0; i < nb_fois; i = i + 1)
   {
      cout << carac;
   }
   
}

void definirLettres(int nb_lettres, char alphabet[])
{
   for(int i = 0; i < nb_lettres; i = i + 1 )
   {
      alphabet[i] = 'a' + i;
   }
}

int main()
{
   int nb_lettres;
   cin >> nb_lettres;
   int nb_cols = 2 * nb_lettres - 1;
   char alphabet[NB_LETTRES];
   
   // construire l'alphabet
   definirLettres(nb_lettres, alphabet);
   
   // traitement ligne 1 à nb_lettres (nb_lettres-1 lignes)
   for (int i = 0; i < nb_lettres; i = i + 1)
   {
      if ( i != 0)
      {
         for (int j = 0; j < i; j = j + 1)
         {
            cout << alphabet[j];
         }
      }
      
      drawCaracter(alphabet[i], nb_cols);
      
      // partie symétrique
      
      if ( i != 0)
      {
         for (int k = i - 1; k >= 0; k = k - 1)
         {
            cout << alphabet[k];
         }
      }
      nb_cols -= 2; cout << endl;
      
    }
    
     // remettre cols a plus 4 pour afficher le bon nbre de lignes
      nb_cols += 4;
      
      //traitement partie restante
      for (int cpt = nb_lettres - 2; cpt >= 0; cpt = cpt - 1)
      {
         if ( cpt != 0)
         {
            for (int n = 0; n < cpt; n = n + 1)
            {
               cout << alphabet[n];
            }
         }
         
         drawCaracter(alphabet[cpt], nb_cols);
         
         // partie symétrique
         
         if ( cpt != 0)
         {
            for (int m = cpt - 1; m >= 0; m = m - 1)
            {
               cout << alphabet[m];
            }
         }
         nb_cols += 2; cout << endl; 
      }
   
   return 0;
}