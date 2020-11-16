#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   
   string texte;
   getline(cin, texte);
   for (int i = 0; i < (int)texte.length(); i = i + 1)
   {
      if(texte[i] >= 97 && texte[i] <=122)
      {
         texte[i] = (char)toupper(texte[i]);
      }
   }
   cout << texte << '\n';
   return 0;
}