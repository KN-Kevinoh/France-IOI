#include <iostream>

using namespace std;

int main()
{
   double poids, age_jours, prix;
   int nb_legumes = 0;
   
   cin >> nb_legumes;
   
   while( nb_legumes > 0)
   {
      cin >> poids >> age_jours >> prix;
      cout << prix / poids << endl;
      
      nb_legumes--;
   }
   return 0;
}