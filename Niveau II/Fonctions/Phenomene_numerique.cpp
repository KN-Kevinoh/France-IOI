#include <iostream>

using namespace std;

int calculTerme(int terme_courant)
{
   if( terme_courant %  2 == 0 )
   {
      terme_courant = terme_courant / 2;
      return terme_courant;
   }
   else
   {
      terme_courant = terme_courant * 3 + 1;
      return   terme_courant;
   }
}


int main()
{
   int terme_courant;
   
   cin >> terme_courant;
   
   while((terme_courant = calculTerme(terme_courant)) > 1)
   {
      cout << terme_courant << " ";
   }
   
   cout << "1" << endl;
   return 0;
}