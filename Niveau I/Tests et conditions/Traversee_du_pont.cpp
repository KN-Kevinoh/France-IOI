#include <iostream>

using namespace std;

int main ()
{
   int face1 = 0;
   int face2 = 0;
   
   cin >> face1 >> face2;
   
   int somme = face1 + face2;
   
   if ( somme >= 10)
   {
      cout << "Taxe spéciale !" << endl;
      cout << "36" << endl;
   }else{
      cout << "Taxe régulière" << endl;
      cout << somme * 2 << endl;
   }
   return 0;
}