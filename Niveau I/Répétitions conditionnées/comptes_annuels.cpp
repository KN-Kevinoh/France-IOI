#include <iostream>

using namespace std;

int main ()
{
   int depense_courante = 0;
   int depense_totale = 0;
   
   cin >> depense_courante;
   while(depense_courante != -1)
   {
      depense_totale += depense_courante;
      cin >> depense_courante;
   }
   cout << depense_totale;
   return 0;
}