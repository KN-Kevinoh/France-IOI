#include <iostream>
#define NB_MAX_LIVRES 1000

using namespace std;

void decompterEmprunt(int biblio[])
{
   for(int i = 0; i < NB_MAX_LIVRES; i = i + 1)
   {
      if(biblio[i] != 0)
         biblio[i] = biblio[i] - 1;
   }
}

int main()
{
   int nb_livres, nb_jours;
   cin >> nb_livres >> nb_jours;
   
   int biblio[NB_MAX_LIVRES] = {0};
   
   for(int i = 0; i < nb_jours; i = i + 1)
   {
      int nb_clients, livre, duree;
      
      cin >> nb_clients;
      
      for(int j = 0; j < nb_clients; j = j + 1)
      {
        cin >> livre >> duree;
        if(biblio[livre] == 0)
        {
           biblio[livre] = duree;
           cout << "1" << endl;
        }
        else
        {
           cout << "0" << endl;
        }
           
      }
      
      decompterEmprunt(biblio);
      
   }
    
   return 0;
}