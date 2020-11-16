#include <iostream>
#include <string>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   
   char auteur[50];
   int age_fils;
   char start_char = 'A';
   
   cin >> auteur;
   cin >> age_fils;
    
   int cpt = 1;
   while(start_char != auteur[0])
   {
     start_char++;
     cpt++;
   }
   
   start_char = 'A';
   while(age_fils > 1)
   {
      start_char++;
      age_fils--;
   }
   
   cout << cpt <<start_char << '\n';
   
   return 0;
 }