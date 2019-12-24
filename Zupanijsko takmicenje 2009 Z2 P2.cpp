#include <iostream>

using namespace std;
/*TEKST ZADATKA: https://hsin.hr/zup08/pasccpp2_zadaci.pdf
ZADATAK BROJ: 2*/
/* U zadatku koristim na nekim mjestima '1' cisto kako bi svako polje obiljezio sa jednim metrom ako neko zeli provjeriti
i izgled samog polja i ploca, '/' koristim kao dijelove ploce ispod kojih su stubovi. Oznaka '*' oznacava prazan prostor
radi lakseg snalazenja.  */
int main()
{
    int n;
    int Y, X1, X2, X;
    int temp = 0;
    int temp_j;
    int metraza = 0;
    char matrica[100][100];
    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            matrica[i][j] = '*';
        }
    }
    cin>>n;
    for(int x = 0; x < n; x++)
    {
        cin>>Y>>X1>>X2;
        X = X2 - X1;
        temp = X;
        matrica[Y][X1] = '/';
        temp--;
        X1++;
        while(temp > 0)
        {
            matrica[Y][X1] = '#';
            temp--;
            X1++;
        }
        matrica[Y][X1-1] = '/';

    }
    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            if(matrica[i][j] == '/')
            {
                temp = i;
                temp_j = j;
                while(matrica[temp - 1][temp_j] == '*')
                {
                    matrica[temp-1][temp_j] = '1';
                    metraza++;
                    temp--;
                }
                if(matrica[temp - 1][temp_j] == '#' || matrica[temp - 1][temp_j] == '/')
                {
                    metraza++;
                }
            }
        }
    }
    cout<<metraza<<endl;
    /*for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 20; j++)
        {
            cout<<matrica[i][j] << " ";
        }
        cout<<endl;
    }*/
    return 0;
}
