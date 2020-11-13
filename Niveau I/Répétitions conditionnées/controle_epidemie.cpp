#include <iostream>

using namespace std;

int main ()
{
   int nbPopulations = 0;
   int nb_initial_contaminer = 1;
   int nbJours = 1;
   
   cin >> nbPopulations;
   while( nb_initial_contaminer < nbPopulations )
   {
      nbJours++;
      nb_initial_contaminer *= 3;
   }
   cout << nbJours;
   return 0;
}