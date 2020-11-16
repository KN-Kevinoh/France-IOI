#include <iostream>
using namespace std;

void entrerMotPasse(int mp_attendu)
{
   int mot_passe = 0;
   while(mot_passe != mp_attendu)
   {
      cout << "Entrez le code :" << endl;
      cin >> mot_passe;
   }
}

int main()
{
   const int mp_attendu = 4242;
   const int mp_attendu2 = 2121;
   
   entrerMotPasse(mp_attendu);
   
   cout << "Premier code bon." << endl;
   
   entrerMotPasse(mp_attendu2);
   
   cout << "Bravo." << endl;
   
   return 0; 
}