#include <iostream>
#include <string>

using namespace std;

int main()
{
   int nb_lignes;
   
   cin >> nb_lignes;
   
   cin.ignore();
   
   for(int i = 0; i < nb_lignes ; i = i + 1)
   {
     string sentence;
     getline(cin, sentence);
     
     int len = (int)sentence.length();
     
     for (int j = len - 1; j >= 0; j = j - 1)
     {
        cout << sentence[j];
     }
     
     cout << endl;
     
   }
   
   return 0;
}