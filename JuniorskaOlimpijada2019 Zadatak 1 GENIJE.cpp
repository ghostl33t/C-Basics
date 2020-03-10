#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;
/* TEKST: https://hsin.hr/jhio2019/zadaci/zadaci.pdf Zadatak broj 1
nije zavrsen 4. dio */
void sortiranje(int niz[], int nizdva[], int vel)
{
    for(int i = 0; i < vel-1; i++)
    {
        for(int j = 0; j < vel - 1 - i; j++)
        {
            if(niz[j] > niz[j+1])
            {
                swap(nizdva[j], nizdva[j+1]);
                swap(niz[j], niz[j+1]);
            }
        }
    }
}
int main()
{
    ifstream Ulaz("ulaz3.in");
    int N, K, prvaOcjena;
    int prvi, drugi, treci, cetvrti; // dijelovi
    int bodoviZvijezda[100]; //bodovi
    int zvijezde[100];
    int zvijezdeRedomNaOsnovuOcjeneSudaca[100];
    int ocjeneSudaca[100];
    Ulaz>>N;
    for(int i = 0; i < 100; i++)
    {
        bodoviZvijezda[i] = 0;
        ocjeneSudaca[i] = 0;
        zvijezde[i] = i+1;
        zvijezdeRedomNaOsnovuOcjeneSudaca[i] = i+1;
    }
    for(int i = 0; i < N; i++)
    {
        Ulaz>>prvaOcjena;
        bodoviZvijezda[i] += prvaOcjena;
    }
    sortiranje(bodoviZvijezda,zvijezde,N);
    prvi = zvijezde[N-1];
    for(int i = 0; i < N; i++)
    {
        if(i > 0 && bodoviZvijezda[i] == bodoviZvijezda[i-1])
            bodoviZvijezda[i] += bodoviZvijezda[i-1];
        else
            bodoviZvijezda[i] += N - i;
        drugi = N-i;
    }
    Ulaz>>K;
    for(int i = 0; i < K; i++)
    {
        for(int j = 0; j < N; j++)
        {
            Ulaz>>prvaOcjena;
            bodoviZvijezda[j] += prvaOcjena;
        }
        
    }
    sortiranje(bodoviZvijezda,zvijezde,N);
    treci = zvijezde[N-1];
    cout << prvi << endl << drugi<< endl << treci<< endl/* << cetvrti*/;
    return 0;
}
