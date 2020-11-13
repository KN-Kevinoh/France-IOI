#include <iostream>

using namespace std;
int main()
{
  int nbPaquets = 0;
  int poidsUnite = 0;
  
  cin >> nbPaquets >> poidsUnite;
  
  if ( nbPaquets * poidsUnite > 105 ) 
  {
     cout << "Surcharge !" << endl;
  }
  
  return 0;
  
}