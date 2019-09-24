#include <iostream>

using namespace std;

int main()
{
   int n;
   int cuvar1,cuvar2,cuvar3,cuvar4;
   int matrica[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};
   cin>>n;
   int niz[n];
   for(int x = 0; x < n; x++)
   {
       cin>>niz[x];
   }
   for(int x = 0; x < n; x++)
   {
       if(niz[x] == 1)
       {
           for(int i = 0; i < 3; i++)
           {
               for(int j = 0; j < 3; j++)
               {
                   cuvar1 = matrica[0][0];
                   cuvar2 = matrica[0][1];
                   cuvar3 = matrica[1][0];
                   cuvar4 = matrica[1][1];
                   matrica[0][0] = cuvar3;
                   matrica[0][1] = cuvar1;
                   matrica[1][0] = cuvar4;
                   matrica[1][1] = cuvar2;
               }
           }
       }
       if(niz[x] == 2)
       {
           for(int i = 0; i < 3; i++)
           {
               for(int j = 0; j < 3; j++)
               {
                   cuvar1 = matrica[0][1];
                   cuvar2 = matrica[0][2];
                   cuvar3 = matrica[1][1];
                   cuvar4 = matrica[1][2];
                   matrica[0][1] = cuvar3;
                   matrica[0][2] = cuvar1;
                   matrica[1][2] = cuvar2;
                   matrica[1][1] = cuvar4;
               }
           }
       }
       if(niz[x] == 3)
       {
           for(int i = 0; i < 3; i++)
           {
               for(int j = 0; j < 3; j++)
               {
                   cuvar1= matrica[1][0];
                   cuvar2 = matrica[1][1];
                   cuvar3 = matrica[2][1];
                   cuvar4 = matrica[2][0];
                   matrica[1][0] = cuvar4;
                   matrica[1][1] = cuvar1;
                   matrica[2][1] = cuvar2;
                   matrica[2][0] = cuvar3;

               }
           }
       }
       if(niz[x] == 4)
       {
           for(int i = 0; i < 3; i++)
           {
               for(int j = 0; j < 3; j++)
               {
                   cuvar1 = matrica[1][1];
                   cuvar2 = matrica[1][2];
                   cuvar3 = matrica[2][2];
                   cuvar4 = matrica[2][1];
                   matrica[1][1] = cuvar4;
                   matrica[1][2] = cuvar1;
                   matrica[2][2] = cuvar2;
                   matrica[2][1] = cuvar3;
               }
           }
       }
   }
   for(int i = 0; i < 3; i++)
   {
       for(int j = 0; j < 3; j++)
       {
           cout<<matrica[i][j];
       }
       cout<<endl;
   }
   return 0;
}
