#include <iostream>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{  
   int cpt = 0;
   repeat (100)
   {
      cpt = cpt + 1;
      cout << cpt << endl;
   }
   cout << "J'arrive !" << endl;
   return 0;
}