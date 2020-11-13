#include <iostream>

using namespace std;
int main()
{
   int nbVisite = 0 ;
   int nbVilles = 0;
   
   cin >> nbVisite;
   
   int nbPopulations = 0;
   
   for (int i = 1 ; i <= nbVisite; i++)
   {
      cin >>  nbPopulations;
      
      if( nbPopulations > 10000)
      {
         nbVilles++;
      }
   }
   
   cout << nbVilles << endl;
   
   return 0;
}