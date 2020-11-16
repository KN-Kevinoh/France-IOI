#include <iostream>
#include <string>
using namespace std;
int main()
{
   string texte;
   
   for (int i = 0; i < 2; i = i + 1 )
   {
      getline(cin, texte);
      int len = (int)texte.length();
      
      for (int j = 0; j < len; j = j + 1 )
      {
         if(texte[j] != 'A' && texte[j] != 'E' && texte[j] != 'I' && texte[j] != 'O' &&
          texte[j] != 'U' && texte[j] != 'Y' && texte[j] != ' ')
         {
            cout << texte[j];
         }
      }
      
      cout << endl;
   }
   
   
   return 0;
}