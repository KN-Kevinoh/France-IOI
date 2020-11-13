#include <iostream>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int coutAPayer = 10;
   int heureArrivee = 0;
   
   cin >> heureArrivee;
   
   repeat (heureArrivee)
   {
      coutAPayer += 5;
   }
   
   if ( coutAPayer > 53 )
   {
      coutAPayer = 53;
   }
   cout << coutAPayer << endl;
   return 0;
}