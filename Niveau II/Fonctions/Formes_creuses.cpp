#include <iostream>

using namespace std;

void drawX(char caractere, int nb_fois)
{
   for(int i = 0; i < nb_fois; i = i + 1)
   {
      cout << caractere;
   }
   
   cout << endl;
}

void displaySpace(int nb_spaces)
{
   for(int i = 0; i < nb_spaces; i = i + 1)
   {
      cout << " ";
   }
   
}

void drawRectangle(char caractere, int nb_lignes, int nb_colonnes)
{
   for(int i = 0; i < nb_lignes; i = i + 1)
   {
      
      cout << caractere;
      
      if (i == 0 || i == nb_lignes - 1 )
      {
         if(nb_colonnes != 1)
         {
            for(int j = 0; j < nb_colonnes - 1; j = j + 1)
            {
               cout << caractere;
            }
         }
         
      }
      else 
      {
         if(nb_colonnes != 1)
         {
             displaySpace(nb_colonnes - 2);
             cout << caractere;
         }
        
      }
      
      cout << endl;
   }
 
}

void drawTriangle(char caractere, int nb_lignes)
{
   for(int i = 0; i < nb_lignes; i = i + 1)
   {
      cout << caractere;
      
      if (i == 0)
          cout << endl;
      else if (i != nb_lignes - 1 && i != 0)
      {
        displaySpace(i - 1); 
        cout << caractere;
        cout << endl;
      }
      else
      {
         for(int j = 0; j < nb_lignes - 1; j = j + 1)
         {
            cout << caractere;
         }
         cout << endl;
      } 
     
   }
 
}



int main()
{
   int nb_X, nb_dieses, nb_cols, nb_arobase;
   cin >> nb_X >> nb_dieses >> nb_cols >> nb_arobase;
   
   drawX('X', nb_X);
   
   cout << "" << endl;
   
   drawRectangle('#', nb_dieses, nb_cols);
   
   cout << "" << endl;
  
   drawTriangle('@', nb_arobase);
   
   return 0;
}