#include <iostream>
using namespace std;
/*TEKST: https://i.imgur.com/4vr9fh8.png */
void spustanje(char matrica[][5], char boja)
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(matrica[i][j] == boja && i - 1 >= 0)
            {
                matrica[i][j] = matrica[i-1][j];
                matrica[i-1][j] = boja;
            }
        }
    }
}
int main()
{
    char brisanje_boje;
    char matrica[5][5];
    cin>>brisanje_boje;
    for(int i = 0; i < 5; i++)
    {
           for(int j = 0; j < 5; j++)
           {
               cin>>matrica[i][j];
               if(matrica[i][j] == brisanje_boje && i - 1 >= 0)
               {
                    matrica[i][j] = matrica[i-1][j];
                    matrica[i-1][j] = brisanje_boje;
               }
           }
    }
    spustanje(matrica, brisanje_boje);
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(matrica[i][j] == brisanje_boje)
                cout<<'X';
            else
                cout<<matrica[i][j];
        }
        cout<<endl;
    }
    return 0;
}
