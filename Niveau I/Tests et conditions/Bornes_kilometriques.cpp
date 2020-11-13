#include <iostream>

using namespace std;

int main()
{
   int borne1 = 0;
   int borne2 = 0;
   
   cin >> borne1 >> borne2;
   int resultat = (borne1 > borne2)?( borne1 - borne2 ):( borne2 - borne1);
   cout << resultat << endl;
   
   return 0;
}