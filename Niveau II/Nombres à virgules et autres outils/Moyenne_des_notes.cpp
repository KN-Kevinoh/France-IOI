#include <iostream>

using namespace std;

int main ()
{
   int nb_notes = 0;
   double note;
   double moyenne = 0;
   
   cin >> nb_notes;
   double cpt = nb_notes;
   
   while (cpt > 0)
   {
      cin >> note;
      moyenne += note;
      cpt--;
   }
   
   cout << moyenne / nb_notes;
   
   return 0;
}