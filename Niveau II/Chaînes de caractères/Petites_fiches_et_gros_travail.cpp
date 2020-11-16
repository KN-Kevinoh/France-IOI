#include <iostream>
#include <string>

using namespace std;

int main()
{
   string auteur, titre_livre;
   
   for (int i = 0; i < 6; i++)
   {
      getline(cin, auteur);
      getline(cin, titre_livre);
      
      cout << titre_livre << endl;
      cout << auteur << endl;
   }
   
   return 0;
}