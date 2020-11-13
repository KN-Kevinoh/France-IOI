#include <iostream>
#include <cstdlib>
#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
using namespace std;
int main()
{
   long min_x = 0;
   long max_x = 0;
   long min_y = 0;
   long max_y = 0;
   long nbMaison = 0;
   
   cin >> nbMaison;
   
   long x = 0;
   long y = 0;
   
   int cpt = 0;
   repeat(nbMaison)
   {
      cin >> x >> y;
      cpt++;
      if (cpt == 1)
      {
      //initialisation
         min_x = x;
         min_y = y;
         max_x = x;
         max_y = y;
      }else{
      
         if ( min_x > x)
         {
            min_x = x;
         }
         else
         {
            if (max_x < x)
            {
               max_x = x;
            }
         }
         
         if ( min_y > y)
         {
            min_y = y;
         }
         else
         {
            if (max_y < y)
            {
               max_y = y;
            }
         }
      
      }
      
     
   }
   
   cout << ((max_x - min_x) + (max_y - min_y)) * 2 << endl;
   
   return 0;
}