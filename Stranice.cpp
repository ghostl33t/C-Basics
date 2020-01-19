#include <iostream>

using namespace std;
/*TEKST: https://i.imgur.com/04fHVjv.png */
void ispis(int matrica[][10],int tempN, int tempj, int& brojac)
{
    for(int x = 0; x < tempN; x++)
    {
        for(int j = tempj; j < tempN; j++)
            brojac+=matrica[x][j];
    }
    cout<<brojac<<endl;
}
int main()
{
    int N,tempN,brojac = 1,tempj=0,tempi=1,matrica[10][10];
    char naredba;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
            matrica[i][j] = 0;
    }
    cin>>N;
    tempN=N; //da mi ne bi uticalo na vrijednost N pri unosu, dodjelit vrijednost N tempN, kroz kod je sve jasno zasto
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < i+1; j++)
        {
            matrica[i][j] = brojac;
            brojac++;
        }
    }
    for(int i = 0; i < N-1; i++)
    {
        cin>>naredba;
        brojac=0;
        if(naredba=='A')
            tempj++; //capni stupac
        else if(naredba == 'C')
            tempN--; //capni red
        else if(naredba == 'B')
        {
            for(int x = tempN - 1; x >= 0; x--)
            {
                for(int j = tempN-tempi; j >= tempj;j--)
                {
                    matrica[x][j] = 0;
                    x--;
                }
            }
            tempi++;
        }
        ispis(matrica,tempN,tempj,brojac);
    }
    return 0;
}
