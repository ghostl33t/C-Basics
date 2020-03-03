#include <iostream>
/* TEKST: Z BR 1: https://hsin.hr/zup08/pasccpp1_zadaci.pdf */
using namespace std;

int main()
{
    int N, M, brojac = 0, izlaz = 0;
    string niz_iz_naslova[50];
    string provjera;
    cin>>N;
    for(int i = 0; i < N; i++)
    {
        cin>>niz_iz_naslova[i];
    }
    cin>>M;
    for(int i = 0; i < M; i++)
    {
        cin>>provjera;
        if(brojac <= N / 2){
            for(int j = 0; j < N; j++)
            {
                if(provjera == niz_iz_naslova[j])
                {
                    brojac++;
                    niz_iz_naslova[j] = "#";
                    izlaz = i+1;
                }
            }
        }
    }
    cout<<izlaz;
    return 0;
}
