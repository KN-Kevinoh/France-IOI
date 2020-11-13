#include <iostream>
#define repeat(nb) for(int _loop=1, _max=(nb); _loop <= _max; _loop++)

using namespace std;
int main()
{
   int cpt = 100;
   repeat(101)
   {
      cout << cpt << endl;
      cpt--;
   }
   cout << "Décollage !" << endl;
   return 0; 
}