#include <iostream>

using namespace std;

int main()
{
   int nb_deplacements; 
   
   cin >> nb_deplacements;
   
   //deplacements inverse
   int deplacements[nb_deplacements] = {0};
   
   int deplacement;
   
   for(int i = 0; i < nb_deplacements; i++)
   {
      cin >> deplacement;
      
      switch(deplacement)
      {
         case 1 : deplacement = 2; break;
         case 2 : deplacement = 1; break;
         case 3 : deplacement = 3; break;
         case 4 : deplacement = 5; break;
         case 5 : deplacement = 4; break;
      }
      deplacements[i] = deplacement;
   }
   
   
   for (int i = nb_deplacements; i > 0; i--)
   {
      cout << deplacements[i - 1] << endl;
   }
   return 0;
}