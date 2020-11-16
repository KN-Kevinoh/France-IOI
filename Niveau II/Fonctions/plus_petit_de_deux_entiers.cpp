#include <iostream>

using namespace std;

int min2(int min, int b)
{
   if( min < b)
      return min;
   else
      return b;
}


int main()
{
   int a;
   int min = 10000;
   
   for (int i = 0; i < 10; i = i + 1)
   {
      cin >> a;
      min = min2(min, a);
   }
   
   cout << min << endl;
  
   return 0;
}