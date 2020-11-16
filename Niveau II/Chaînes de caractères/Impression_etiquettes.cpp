#include <iostream>
#include <string>

using namespace std;

int main()
{
   string sentence;
   getline(cin, sentence);
   
   int len = (int)sentence.length();
   
   for(int i = 0; i < len ; i = i + 1)
   {
      cout << sentence[i] << endl;
   }
   
   return 0;
}