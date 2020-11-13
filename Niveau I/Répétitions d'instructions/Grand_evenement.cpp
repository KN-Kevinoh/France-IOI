#include <iostream>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;

int main()
{
   // firstly get robot up to the first column
   repeat(9)
   {
      haut();
   }
   
    // move robot through the others 8 first columns 
   repeat(4)
   {
      droite();
      
      repeat(8)
      {
         bas();
      }
      
      droite();
      
      repeat(8)
      {
         haut();
      }
   }
   
   // move to last column right
   droite();
   // move down (straight)
   repeat(9)
   {
      bas();
   }
    // move down (straight)
   repeat(9)
   {
      gauche();
   }
   
   return 0;
}