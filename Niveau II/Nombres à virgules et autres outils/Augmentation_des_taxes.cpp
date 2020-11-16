#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
   double taxe_ancienne, taxe_nouvelle, prix_actuelle;
  
   cin >> taxe_ancienne >> taxe_nouvelle >> prix_actuelle;
  
   double prix_avenir;
   if(taxe_ancienne == taxe_nouvelle )
   {
       cout << prix_actuelle << endl;
   }
   else
   {
      taxe_ancienne = taxe_ancienne / 100;
      taxe_nouvelle = taxe_nouvelle / 100;
      prix_actuelle /= (1 +  taxe_ancienne );
      prix_actuelle *= (1 + taxe_nouvelle);
      
      prix_avenir = prix_actuelle * 100;
      prix_avenir = round(prix_avenir) / 100;
      
      cout << prix_avenir << endl;
   }
   
   return 0;
}