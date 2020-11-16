#include <iostream>
#include <string>
using namespace std;
int main()
{
   string joueur1, joueur2;
   getline(cin, joueur1);
   getline(cin, joueur2);
   
   int len1 = (int)joueur1.length();
   int len2 = (int)joueur2.length();
   
   int cpt = 0;
   int nb_parties_egales = 0;
   bool fin_jeux = false;
   
   while (cpt < len1 || cpt < len2)
   {
      if(joueur1[cpt] == joueur2[cpt])
      {
         nb_parties_egales++; 
      }
      else if(joueur1[cpt] < joueur2[cpt])
      {
         cout << "1" << endl;
         fin_jeux = true;
      }
      else
      {
         cout << "2" << endl;
         fin_jeux = true;
      }
      
      if(cpt == len1 - 1 && cpt < len2 -1 && fin_jeux == false)
      {
         cout << "2" << endl;
         fin_jeux = true;  
      }
      
      if(cpt == len2 - 1 && cpt < len1 -1 && fin_jeux == false)
      {
         cout << "1" << endl;
         fin_jeux = true;  
      }
      
      if(cpt == len2 - 1 && cpt == len1 -1 && fin_jeux == false)
      {
         cout << "=" << endl;
         fin_jeux = true;  
      }
      
      if(fin_jeux)
      {
         cout << nb_parties_egales << endl;
         break;
      }
      
      cpt++;
   }
      
  
   
   return 0;
}