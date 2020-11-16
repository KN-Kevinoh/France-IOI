#include <iostream>

using namespace std;

int main()
{
  int nb_emplacements;
  
  cin >> nb_emplacements;
  
  int marchands[nb_emplacements] = {0};
  
  int position_marchand;
  
  for (int indice = 0 ; indice < nb_emplacements; indice = indice + 1)
   {
      cin >> position_marchand;
      marchands[position_marchand] = indice;
   }
   
  //positions des marchands par ordre des numéros des marchands
  
  for (int i = 0; i < nb_emplacements; i = i + 1)
  {
      cout << marchands[i] << endl;
  }
  
  
  return 0;
}