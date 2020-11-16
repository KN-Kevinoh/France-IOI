#include <iostream>
#include <algorithm> 

using namespace std;

int main()
{
  int nb_habitants;
  
  cin >> nb_habitants;
  
  int richesse[nb_habitants] = {0};
  
  for (int indice = 0 ; indice < nb_habitants; indice++)
   {
      cin >> richesse[indice];
   }
  
  sort(richesse, richesse + nb_habitants);
  
  int index;
  
  if( nb_habitants % 2 != 0 )
  {
     index = (nb_habitants - 1) / 2;
     cout <<  richesse[index] << endl;
  }
  else
  {
     index = nb_habitants / 2;   
     double mediane = richesse[index - 1] + richesse[index];
     mediane /= 2 ;
     cout << mediane << endl;
  }
  
  return 0;
}