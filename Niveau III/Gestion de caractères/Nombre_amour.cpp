#include <iostream>
#include <string>

using namespace std;

int get_nberForPrenom(string prenom)
{
   int amour = 0;
   for(int i = 0; i < (int)prenom.length(); i=i+1)
   {
      amour  += prenom[i] - 'A';
   }
   return amour;
}

int getNberAmour(int nber)
{
   //while(nber >= 10)
   //{
      int r = 0; 
      while (nber >= 10)
      {
         r += nber % 10;
         nber = nber / 10;
         if(nber < 10)
         {
            if (r + nber >= 10)
            {
               nber = nber + r;
               r = 0;
            }
         }
     }
      //r += nber;
      //nber = r;
   //}
   
   return (nber + r);
}



int main()
{
   ios::sync_with_stdio(false);
   
   string prenom1, prenom2;
   cin >> prenom1 >> prenom2; 
  
   int amour1 = get_nberForPrenom(prenom1);
   int amour2 = get_nberForPrenom(prenom2);
   
   cout << getNberAmour(amour1) << " " << getNberAmour(amour2);
   
}