#include <iostream>
#include <string>

using namespace std;

int main()
{
   int nb_livres;
   int longueur_max = 0;
   string titre;
   
   cin >> nb_livres;
   cin.ignore();
   
   for(int i = 0; i < nb_livres; i = i + 1)
   {
      getline(cin, titre);
      
      if( (int)titre.length() > longueur_max)
      {
         longueur_max = (int)titre.length();
         cout << titre << endl;
      }
   }
   
   return 0;
}