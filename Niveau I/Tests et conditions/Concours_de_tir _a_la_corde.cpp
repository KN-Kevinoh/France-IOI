#include <iostream>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int nbMbres, poidsEquipe1, poidsEquipe2;
   int resultat1 = 0;
   int resultat2 = 0;
   
   cin >> nbMbres;
   
   repeat(nbMbres)
   {
      cin >> poidsEquipe1 >> poidsEquipe2;
      resultat1 += poidsEquipe1;
      resultat2 += poidsEquipe2;
   }
   
   if (resultat1 > resultat2 )
   {
      cout << "L'équipe 1 a un avantage" << endl;
   }
   if(resultat1 < resultat2 )
   {
       cout << "L'équipe 2 a un avantage" << endl;
   }
   
    cout << "Poids total pour l'équipe 1 : " << resultat1 << endl;
    cout << "Poids total pour l'équipe 2 : " << resultat2 << endl;
   
   return 0;
   
}