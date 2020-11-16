#include <iostream>
#include <string>
using namespace std;
int main()
{
   char caractere;
   int nb_lignes;
   string texte;
   
   cin >> caractere;
   cin >> nb_lignes;
   
   cin.ignore();
   
   int nb_occurrences = 0;
   
   for ( int i = 0; i < nb_lignes; i = i + 1)
   {
      getline(cin, texte);
      
      for(int j = 0; j < (int)texte.length(); j = j + 1)
      {
         if (caractere == texte[j])
            nb_occurrences ++;
      }
   }
   
   cout << nb_occurrences << endl;
}