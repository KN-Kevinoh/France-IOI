#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
using namespace std;
int main()
{
   repeat (20)
   {
      repeat (10)
      {
         cout << "OXOX";
      }
      cout << endl;
      repeat (10)
      {
         cout << "XOXO";
      }
      cout << endl;
   }
   return 0;
}