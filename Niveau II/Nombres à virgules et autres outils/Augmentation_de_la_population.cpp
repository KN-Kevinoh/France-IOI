#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
   int nb_populations;
   double taux_croissance;
   
   cin >> nb_populations;
   cin >> taux_croissance;
   taux_croissance = (taux_croissance * nb_populations) / 100;
   nb_populations += floor(taux_croissance);
   
   cout << nb_populations << endl;
   
   return 0;
}