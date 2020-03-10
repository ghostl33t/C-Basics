/* TEKST: https://hsin.hr/jhio2019/zadaci/zadaci.pdf Zadatak broj 1
zavrsen 4. dio, baga kod pamcenja starih vrijednosti tj kod druge varijable ako se pamte od prosle varijable znam ja sta je ugl*/
#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;
void sortiranje(int niz[], int nizdva[], int vel)
{
    for(int i = 0; i < vel-1; i++)
    {
        for(int j = 0; j < vel - 1 - i; j++)
        {
            if(niz[j+1] > niz[j])
            {
                swap(nizdva[j+1], nizdva[j]);
                swap(niz[j+1], niz[j]);
            }
        }
    }
}
int main()
{
    ifstream Ulaz("ulaz1.in");
    int N, K, prvaOcjena, tempvar = 0, prosli = 0;
    int prvi, drugi, treci, cetvrti;
    int bodoviZvijezda[100];
    int zvijezde[100];
    int bodoviSudija[100];
    int bodoviSudijaTemp[100];
    int zvijezdeNaOsnovuSudija[100];
    for(int i = 0; i < 100; i++)
    {
        bodoviZvijezda[i] = 0;
        zvijezde[i] = i+1;
        zvijezdeNaOsnovuSudija[i] = i+1;
        bodoviSudija[i] = 0;
        bodoviSudijaTemp[i] = 0;

    }
    Ulaz>>N;
    for(int i = 0; i < N; i++)
    {
        Ulaz>>prvaOcjena;
        bodoviZvijezda[i] += prvaOcjena;
    }
    sortiranje(bodoviZvijezda,zvijezde,N);
    prvi = zvijezde[0];
    for(int i = 0; i < N; i++)
    {
        if(i > 0 && bodoviZvijezda[i] == prosli)
            bodoviZvijezda[i] = bodoviZvijezda[i-1];
        else
            bodoviZvijezda[i] += N - i;
        drugi = N-i;
        prosli = bodoviZvijezda[i] - i - N;
    }
    Ulaz>>K;
    for(int i = 0; i < K; i++)
    {
        for(int j = 0; j < N; j++)
        {
            Ulaz>>prvaOcjena;
            bodoviZvijezda[j] += prvaOcjena;
            bodoviSudijaTemp[j] = prvaOcjena;
        }
        sortiranje(bodoviSudija,zvijezdeNaOsnovuSudija,N);
    }
    sortiranje(bodoviZvijezda,zvijezde,N);
    treci = zvijezde[0];
    for(int i = 0; i < K; i++)
        bodoviSudija[i] = i+1;
    for(int i = 0; i < K; i++)
    {
        tempvar = 0;
        for(int j = 0; j < N; j++)
            tempvar = abs(zvijezde[j] - zvijezdeNaOsnovuSudija[j]);
        bodoviSudijaTemp[i] = tempvar;
    }
    for(int i = 0; i < N-1-i; i++)
    {
        for(int j = 0; j < N-1-i; j++)
        {
            if(bodoviSudijaTemp[j] < bodoviSudijaTemp[j+1])
            {
                swap(bodoviSudijaTemp[j], bodoviSudijaTemp[j+1]);
                swap(bodoviSudija[j],bodoviSudija[j+1]);
            }
        }
    }
    for(int i = N-1; i >=0; i--)
    {
        if(bodoviSudija[i] > 0)
        {
            cetvrti = bodoviSudija[i];
            break;
        }
    }
    cout << prvi << endl << drugi<< endl << treci<< endl << cetvrti;
    return 0;
}
