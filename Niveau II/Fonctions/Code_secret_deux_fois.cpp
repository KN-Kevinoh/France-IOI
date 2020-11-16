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
   
   entrerMotPasse(mp_attendu);
   
   cout << "Encore une fois." << endl;
   
   entrerMotPasse(mp_attendu);
   
   cout << "Bravo." << endl;
   
   return 0; 
}