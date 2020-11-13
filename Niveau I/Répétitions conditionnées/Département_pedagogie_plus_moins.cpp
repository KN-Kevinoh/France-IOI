#include <iostream>

using namespace std;

int main ()
{
   int nbre_cacher = 0;
   int nbre_jouer = 0;
   int nb_coups = 0;
   bool trouve = false;
   
   cin >> nbre_cacher;
   
   while (!trouve)
   {
      cin >> nbre_jouer;
      
      if (nbre_jouer < nbre_cacher )
      {
          cout << "c'est plus" << endl;
      }
      else if (nbre_jouer > nbre_cacher){
          cout << "c'est moins" << endl;
      }
      else
      {
         trouve = true;
      }
      
      nb_coups++;
   }
   cout << "Nombre d'essais nécessaires :" << endl;
   cout << nb_coups << endl;
   return 0;
}