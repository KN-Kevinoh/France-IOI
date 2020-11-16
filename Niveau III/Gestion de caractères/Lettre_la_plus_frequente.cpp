#include <iostream>
#include <string>
#include <cctype>

int getMaxPos(int tab[], int n)
{
   int pos = 0;
   int max = 0;
   for(int i = 0; i < n; i = i + 1)
   {
      if( tab[i] > max)
      {
         max = tab[i];
         pos = i; // tab 0 à 25
      }
   }
   return pos;
}
using namespace std;

int main ()
{
   ios::sync_with_stdio(false);
   string texte;
   int occurrence_char[26] = {0};

   getline(cin, texte);
   for(int i = 0; i < (int)texte.length(); i = i + 1)
   {
      int pos = tolower(texte[i]) - 'a';
      occurrence_char[pos]++;
   }
   int max =  getMaxPos(occurrence_char, 26);
   cout << (char)('A' + max) << endl;
   return 0;
}