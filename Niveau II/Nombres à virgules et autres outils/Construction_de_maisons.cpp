#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
   double nb_kilos;
 
   cin >> nb_kilos;
   int nb_sacs = ceil(nb_kilos / 60);
   
   cout << nb_sacs * 45 << endl;
   
   return 0;
}