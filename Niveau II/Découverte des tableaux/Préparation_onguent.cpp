#include <iostream>

using namespace std;

int main ()
{
   int ingredients[10] = {500, 180, 650, 25, 666, 42, 421, 1, 370 ,211};
   
   int num_ing;
   cin >> num_ing;
   
   cout << ingredients[num_ing] << endl;
   
   return 0; 
}