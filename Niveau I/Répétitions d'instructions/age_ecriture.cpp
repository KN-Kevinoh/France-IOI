#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;

int main()
{
   repeat(30)
   {
      cout << "a_";
   }
   cout << endl;
   
    repeat(30)
   {
      cout << "b_";
   }
   cout << endl;
   
    repeat(30)
   {
      cout << "c_";
   }

   return 0;
}