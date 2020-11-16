#include <iostream>
#include <string>
using namespace std;
 
int main()
{
   string texte;
   getline(cin, texte);
   
   for(int i = 0; i < (int)texte.length(); i = i + 1)
   {
      if (texte[i] != ' ')
         cout << texte[i];
      else
         cout << '_';
   }
   cout << endl;
  
}