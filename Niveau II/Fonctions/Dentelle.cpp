#include <iostream>

using namespace std;

void drawDentelle(char caractere, int nb_fois)
{
   for(int i = 0; i < nb_fois; i = i + 1)
   {
      cout << caractere;
   }
   
   cout << endl;
}


int main()
{
   int nb_fois;
   cin >> nb_fois;
   
   drawDentelle('X', nb_fois);
   
   drawDentelle('#', nb_fois);
  
   drawDentelle('i', nb_fois);
   
   return 0;
}