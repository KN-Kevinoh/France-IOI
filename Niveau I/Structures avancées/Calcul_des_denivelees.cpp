#include <iostream>
#include <cstdlib>
#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
using namespace std;
int main()
{
   int nbTracons= 0;
   int nbMontee = 0;
   int nbDescente = 0;
   
   cin >> nbTracons ;
   
   int variation = 0;
   
   repeat(nbTracons)
   {
      cin >> variation ;
     
      if( variation > 0)
      {
        nbMontee += variation;
      }
      else
      {
         nbDescente  += abs(variation);
      }
      
   }
   cout << nbMontee << endl;
   cout << nbDescente << endl;
   
   return 0;
}