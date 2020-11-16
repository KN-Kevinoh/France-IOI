#include <iostream>

using namespace std;

int main()
{
   int nb_charrettes; 
   
   cin >> nb_charrettes;
   
   double poids_charrettes[nb_charrettes] = {0};
   
   double poids;
   double moyenne = 0;
   
   for(int i = 0; i < nb_charrettes; i++)
   {
      cin >> poids;
      poids_charrettes[i] = poids;
      moyenne += poids;
   }
   
   moyenne /= nb_charrettes;
   
   for (int i = 0; i < nb_charrettes; i++)
   {
      poids_charrettes[i] = moyenne - poids_charrettes[i];
      cout << poids_charrettes[i] << endl;
   }
   return 0;
}