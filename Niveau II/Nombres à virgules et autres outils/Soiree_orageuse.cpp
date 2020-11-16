#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
   double time;
 
   cin >> time;
   double vitesse = 0.34029;
   double distance = round(vitesse * time);
   
   cout << distance << endl;
   
   return 0;
}