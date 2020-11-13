#include <iostream>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)
#include "robot.h"

using namespace std;
int main()
{
   int nberCase = 0;
   repeat (10)
   {
       nberCase++;
      
       repeat (nberCase) 
       {
          droite();
       }
       
       ramasser();
       
       repeat (nberCase) 
       {
          gauche();
       }
       
       deposer();
      
   }
   return 0;
}