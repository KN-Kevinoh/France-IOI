#include <iostream>
#include <cstdlib>
#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
using namespace std;
int main()
{
   
   int nbJours = 0;
   int distance = 0;
   
   cin >>  nbJours;
   int maxDist = 0;
   repeat(abs(nbJours))
   {
      cin >> distance;
        
      if( maxDist < distance)
      {
       maxDist = distance;
      }
      
   }
   cout << maxDist;
}