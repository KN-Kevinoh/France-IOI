#include <iostream>
#include <string>

using namespace std;

int main()
{
   int nb_textes;
   string texte;
   
   cin >> nb_textes;
   cin.ignore();
   
   for (int i = 1; i <= nb_textes; i = i + 1)
   {
      getline(cin, texte);
      
      if(i%2 == 1)
      {
         cout << texte << endl;
      }
   }
   
   return 0;
}