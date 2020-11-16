#include <iostream>

using namespace std;

int main()
{
   int nb_produits, nb_pers;
   
   cin >> nb_produits >> nb_pers;
   
   int sondage[nb_produits] = {0};
   
   int num_produit;
   
   for(int i = 0; i < nb_pers; i++)
   {
      cin >> num_produit;
      sondage[num_produit] += 1;
   }
   
   for (int i = 0; i < nb_produits; i++)
   {
      cout << sondage[i] << endl;
   }
   return 0;
}