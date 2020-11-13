#include <iostream>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int lireNbre = 0;
   int resultat = 0;
   repeat (20)
   {
      cin >> lireNbre;
      resultat += lireNbre;
   }
   
    cout << resultat << endl;
    return 0;
}