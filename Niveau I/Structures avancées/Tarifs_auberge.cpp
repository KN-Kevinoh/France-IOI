#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
   int age = 0;
   int poids = 0;
   
   
   cin >> age >> poids ;
    
    int prix = 0;
    
   if( age == 60)
   {
       cout << prix << endl;
   }
   else
   {
      if (age >= 10 )
      {
         prix = 30;
         
         if( poids >= 20 )
         {
           prix += 10;
           cout << prix << endl; 
         }else{
            cout << prix << endl;
         }
      }else{
         prix  = 5;
         cout << prix << endl;
      }
   }
   
   
   return 0;
}