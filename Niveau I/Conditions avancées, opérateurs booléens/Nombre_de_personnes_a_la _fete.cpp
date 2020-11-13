#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int nbPers = 0;
   int pers = 0;
   int nbPersMax = 0;
   int in_out_pers;
   cin >> nbPers;
 
   repeat (2 * nbPers)
   {
     cin >> in_out_pers;
     if (in_out_pers > 0){
        pers++;
        if(pers > nbPersMax ){
           nbPersMax = pers;
        }
     }else{
        pers--;
     }
   }
   
   cout << nbPersMax << endl;
   
   return 0;
}