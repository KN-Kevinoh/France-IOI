#include <iostream>

using namespace std;

int main()
{
   int prix_ing[10] = {9, 5, 12, 15, 7, 42, 13, 10, 1, 20};
   int kilo;
   int somme = 0;
 
   for (int i = 0; i < 10; i++)
   {
      cin >> kilo;
      somme += kilo * prix_ing[i];
   }
   
   cout << somme << endl;
   
   return 0;
}