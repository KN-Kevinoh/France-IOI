#include <iostream>

using namespace std;

int main()
{
   int nbPers , nbFruits;
   cin >> nbPers >> nbFruits;
  
   if ( nbFruits%nbPers == 0 )
   {
      cout <<  "oui"  << endl;
   }else{
      cout <<  "non"  << endl;
   }
   
   return 0;
}