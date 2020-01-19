#include <iostream>

using namespace std;
/*TEKST: https://i.imgur.com/04fHVjv.png */
int main()
{
    int N,tempN; //tempN sluzi kako bi sjeko redove/stupce
    int brojac = 1; //koristit pri izlazu i koristit pri dodjeljivanju vrijednosti u matrici
    int tempj=0; //kad se osjece stupac, tempj se poveca
    int matrica[10][10];
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
        {
            tempj++; //sijeci stupac
            for(int x = 0; x < tempN; x++)
            {
                for(int j = tempj; j < tempN; j++)
                {
                    brojac+=matrica[x][j];
                }
            }
            cout<<brojac<<endl;
        }
        else if(naredba == 'C')
        {
            tempN--; //sijeci red
            for(int x = 0; x < tempN; x++)
            {
                for(int j = tempj; j < tempN; j++)
                {
                    brojac+=matrica[x][j];
                }
            }
            cout<<brojac<<endl;
        }
        else if(naredba == 'B')
        {
            //posto je dijagonala, mora se kroz nju postavit svih vrijednosti u dijagonali na 0, ne moze se nista sjec ko gore
            for(int x = tempN - 1; x >= 0; x--)
            {
                for(int j = tempN-1; j >= tempj;j--)
                {
                    matrica[x][j] = 0;
                    x--;
                }
            }
            for(int x = 0; x < tempN; x++)
            {
                for(int j = tempj; j < tempN; j++)
                {
                    brojac+=matrica[x][j];
                }
            }
            cout<<brojac<<endl;
        }
    }
    return 0;
}
