#include <iostream>

using namespace std;

void drawRectangle(char caractere, int nb_lignes, int nb_colonnes)
{
   for(int i = 0; i < nb_lignes; i = i + 1)
   {
      for(int j = 0; j < nb_colonnes; j = j + 1)
      {
         cout << caractere;
      }
      
       cout << endl;
   }
 
}


int main()
{
   int nb_lignes, nb_colonnes;
   cin >> nb_lignes >> nb_colonnes;
   
   char motif;
   cin >> motif;
   
   drawRectangle(motif, nb_lignes, nb_colonnes);
   
   return 0;
}