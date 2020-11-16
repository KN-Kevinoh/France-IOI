#include <iostream>

using namespace std;

int main()
{
   int nb_ing[10] = {0};
   int nb_operations;
   
   cin >> nb_operations;
   
   int num_ing, qte_ing;
   for(int i = 0; i < nb_operations; i++)
   {
      cin >> num_ing >> qte_ing;
      nb_ing[num_ing - 1] += qte_ing;
   }
   
   for (int i = 0; i < 10; i++)
   {
      cout << nb_ing[i] << endl;
   }
   return 0;
}