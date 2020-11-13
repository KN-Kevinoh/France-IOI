#include <iostream>
#include <cstdlib>
#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
using namespace std;
int main()
{
   int typeArbre= 0;
   int nbFolioles = 0;
   
   cin >> typeArbre >> nbFolioles ;
     
   if( typeArbre <= 8)
   {
      if( nbFolioles <= 5 )
      {
         cout << "Falarion" << endl;
        
      }
      else
      {
          cout << "Tinuviel" << endl;
      }
     
   }
   else
   {
     if( nbFolioles >= 10 )
      {
         cout << "Calaelen" << endl;
      }
      else
      {
         cout << "Dorthonion" << endl;
      }
   }
   
   return 0;
}