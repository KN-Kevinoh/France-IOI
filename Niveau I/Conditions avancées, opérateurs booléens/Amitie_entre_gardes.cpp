#include <iostream>

using namespace std;
int main()
{
  
   int dDeb1 = 0;
   int dDeb2 = 0;
   int dFin1 = 0;
   int dFin2 = 0;
   
   cin >> dDeb1 >> dFin1 >> dDeb2 >> dFin2;
   int est_ami = 0;
   for(int i = dDeb1; i <= dFin1; i++ ){
        if (dDeb2 <= i && i <= dFin2)
         {
            est_ami = 1;
         }
   }
   
   if (est_ami){
      cout << "Amis" << endl;
   }else{
      cout << "Pas amis" << endl;
   }
 
   return 0;
}