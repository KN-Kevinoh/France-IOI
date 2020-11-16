#include <iostream>
#include <string>

using namespace std;

int main()
{
   int nb_lignes, nb_mots;
   
   cin >> nb_lignes >> nb_mots;
   
   cin.ignore();
   
   int tab[101] = {0};
   
   for(int ligne = 0; ligne < nb_lignes; ligne = ligne + 1)
   {
       for(int n = 0; n < nb_mots; n = n + 1)
       {
          string mot;
          cin >> mot;
          int longueur = mot.length();
          tab[longueur] = tab[longueur] + 1;
       }
       
       cin.ignore();
       
   }
   
  
   
   for (int i = 1; i < 101; i = i + 1)
   {
       
       if (tab[i] > 0)
       {
           cout << i << " : " << tab[i] << endl;
       }
               
   }
   
   return 0;
}