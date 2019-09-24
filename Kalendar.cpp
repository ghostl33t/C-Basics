#include <iostream>

using namespace std;

int main()
{
   string dan;
   int matrica[5][7];
   int zbir_matrice = 0;
   int ukupan_zbir = 0;
   for(int i = 0; i < 5; i++)
   {
       for(int j = 0; j < 7; j++)
       {
            matrica[i][j] == 1;
            zbir_matrice++;
       }
   }
   int brojac = 0;
   int broj_dana;
   cin>>broj_dana;
   cin>>dan;
   if(dan == "utorak")
          {
              brojac++;
          }
          else if(dan == "srijeda")
          {
              brojac += 2;
          }
          else if(dan == "cetvrtak")
          {
              brojac += 3;
          }
          else if(dan == "petak")
          {
              brojac += 4;
          }
          else if(dan == "subota")
          {
              brojac += 5;
          }
          else if(dan == "nedjelja")
          {
              brojac += 6;
          }
    zbir_matrice = zbir_matrice - brojac;
   ukupan_zbir = zbir_matrice - broj_dana + brojac;
   cout<<ukupan_zbir;
   return 0;
}
