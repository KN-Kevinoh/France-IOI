#include <iostream>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++) 
using namespace std;
int main()
{
   int tempMin = 0;
   int tempMax = 0;
   
   cin >> tempMin;
   cin >> tempMax;
   int nbrepeat = tempMax - tempMin + 1;
   repeat(nbrepeat)
   {
      cout << tempMin << endl;
      tempMin ++;
   }
   
   return 0;
}