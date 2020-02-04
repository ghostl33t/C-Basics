#include <iostream>
#include <fstream>
using namespace std;
/*TEKST:  https://i.imgur.com/kdeaaIt.png*/
int main()
{
    ifstream Ulaz("Ulaz.in");
    int N;
    char boje[100];
    char pocetno[100];
    int cistac = 0;
    int izlaz = 1;
    char prosla_boja;
    Ulaz>>N;
    for(int i = 0; i < N; i++)
    {
        Ulaz>>boje[i];
        pocetno[i] = 'a';
    }
    for(int i = 0; i < N; i++)
    {
        if(boje[i] != pocetno[i] && pocetno[i] != prosla_boja)
        {
            izlaz++;
            cistac = 0;
        }
        if(boje[i] != pocetno[i] && cistac < 3)
        {
            izlaz++;
            cistac++;
            prosla_boja = pocetno[i];
        }
        if(cistac == 3)
        {
            cistac = 0;
            izlaz++;
        }
    }
    cout<<izlaz;
    return 0;
}
