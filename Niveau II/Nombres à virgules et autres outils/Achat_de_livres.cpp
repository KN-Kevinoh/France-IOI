#include <iostream>

using namespace std;

int main()
{
   int somme , prix_unite;
   cin >> somme >> prix_unite;
   int nb_livre = somme / prix_unite;
   
   cout <<  nb_livre  << endl;
   
   return 0;
}