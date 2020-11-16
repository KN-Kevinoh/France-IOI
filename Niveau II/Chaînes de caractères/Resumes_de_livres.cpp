#include <iostream>
#include <string>

using namespace std;

int main()
{
   int nb_livres, longueur_resume_min;
   string titre, resumee;
   
   cin >> nb_livres >> longueur_resume_min;
   
   cin.ignore();
   
   for(int i = 0; i < nb_livres; i++)
   {
      getline(cin, titre);
      getline(cin, resumee);
      
      if( (int)resumee.length() < longueur_resume_min )
      {
         cout << titre << endl;
      }
   }
   
   return 0;
}