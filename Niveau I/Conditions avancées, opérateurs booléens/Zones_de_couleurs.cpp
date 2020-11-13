#include <iostream>
#define repeat(nb) for (int _loop=1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int nb_jetons = 0;
   cin >> nb_jetons;
   
   repeat (nb_jetons)
   {
      int position_x, position_y;
      cin >> position_x >> position_y;
      
      if (!(( position_x > 0 ) && ( position_x < 90 ) && ( position_y > 0 ) && 
         ( position_y < 70 )) )
      {
         cout << "En dehors de la feuille" << endl;
      }
      else if( ((( position_x > 15 ) && ( position_x < 45 )) || 
             (( position_x > 60 )  && ( position_x < 85 ))) && (position_y > 60)  )
      {
         cout << "Dans une zone rouge" << endl;
      }
      else if(!( ( position_x > 25 ) && ( position_x < 50 ) && ( position_y > 20 ) && 
         ( position_y < 45 ) ) && ( position_x > 10 ) && ( position_x < 85 ) && 
         ( position_y > 10 ) && ( position_y < 55 ) )
      {
         cout << "Dans une zone bleue" << endl;
      }
      else
      {
         cout << "Dans une zone jaune" << endl;
      }
   }
   
   return 0;
 }