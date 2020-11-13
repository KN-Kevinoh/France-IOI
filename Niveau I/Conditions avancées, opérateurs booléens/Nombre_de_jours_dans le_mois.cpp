#include <iostream>
#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
using namespace std;
int main()
{
   int numMois  = 0;
   int nbJours = 0;
   
   cin >> numMois;
   
   if ( (numMois >= 1 && numMois <= 3) || ( numMois >= 7 && numMois <= 9))
   {
      nbJours = 30;
   }
   if ( (numMois >= 4 && numMois <= 6) || ( numMois == 10))
   {
      nbJours = 31;
   }
   
   if ( numMois == 11 )
   {
      nbJours = 29;
   }
   cout << nbJours << endl;
   
   return 0;
}