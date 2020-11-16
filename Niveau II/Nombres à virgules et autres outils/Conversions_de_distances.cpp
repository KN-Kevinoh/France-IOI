#include <iostream>

using namespace std;

int main()
{
   double lieues_to_km = 1 / 0.707;
   double nb_lieues = 0;
   
   cin >> nb_lieues;
   cout << nb_lieues * lieues_to_km;
   
   return 0;
}