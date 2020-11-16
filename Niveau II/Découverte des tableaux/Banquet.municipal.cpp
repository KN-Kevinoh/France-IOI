#include <iostream>

using namespace std;

int main()
{
  int nb_positions, nb_changements;
  
  cin >> nb_positions >> nb_changements;
  
  int positions[nb_positions] = {0};
  
  for (int indice = 0 ; indice < nb_positions; indice = indice + 1)
   {
      cin >> positions[indice];
   }
  
  int position1, position2;
  int temp;
  
  for (int i = 0; i < nb_changements; i++)
  {
     cin >> position1 >> position2;
     //permutation de position
     temp = positions[position1];
     positions[position1] =  positions[position2];
     positions[position2] = temp;
  }
  
  //afficher les positions
  for (int indice = 0 ; indice < nb_positions; indice = indice + 1)
   {
      cout << positions[indice] << endl;
   }
  
  return 0;
}