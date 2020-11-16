#include <iostream>
#include <string>

using namespace std;

int main()
{
   int nb_noms;
   string prenom, nom;
   
   cin >> nb_noms;
   
   for(int i = 0; i < nb_noms; i = i + 1)
   {
      cin >> prenom >> nom;
      cout << nom << " " << prenom << endl;
   }
   
   return 0;
}