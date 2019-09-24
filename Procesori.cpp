#include <iostream>

using namespace std;

int main()
{
   int n;
   int matrica[100][100];
   for(int i = 0; i < 100; i++)
   {
       for(int j = 0; j < 100; j++)
       {
           matrica[i][j] = -2;
       }
   }
   cin>>n;
   int brojac_nula = 0;
   int brojac_jedinica = 0;
   int brojac_greski = 0;
   int r,s,nula_ili_jedan;
   char naredba;
   for(int x = 0; x < n; x++)
   {
       cin>>naredba;
       if(naredba == 'S')
       {
           cin>>r>>s>>nula_ili_jedan;
           for(int x = 0; x < 100; x++)
            {
               for(int y = 0; y < 100; y++)
               {
                   matrica[r][s] = nula_ili_jedan;
               }
            }
       }
       else if(naredba == 'L')
       {
           cin>>r>>s;
           for(int x = 0; x < 100; x++)
           {
               for(int y = 0; y < 100; y++)
               {
                   if(matrica[r][s] == 1)
                   {
                       brojac_jedinica = brojac_jedinica + 1;

                   }
                   else if(matrica[r][s] == 0)
                   {
                       brojac_nula = brojac_nula + 1;

                   }
                   else
                    brojac_greski = brojac_greski + 1;
               }
           }
       }
       else if(naredba == 'C')
       {
           for(int x = 0; x < 100; x++)
           {
               for(int y = 0; y < 100; y++)
               {
                   matrica[x][y] = -2;
               }
           }
       }
   }
   cout<<brojac_nula / 10000<<" " << brojac_jedinica / 10000<< " " << brojac_greski / 10000;

   return 0;
}
