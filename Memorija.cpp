#include <iostream>
/* TEKST (Z BR2) :  https://hsin.hr/skolska2007/zadaci/pas_c_cpp/prva/zadaci.pdf*/
using namespace std;
void brisanje_memorije(int matrica[][100])
{
    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            matrica[i][j] = -2;
        }
    }
}
int main()
{
    int matrica[100][100];
    int broj_jedinica = 0;
    int broj_nula = 0;
    int broj_greski = 0;
    int N,R, S, vrijednost;
    char Naredba;
    brisanje_memorije(matrica);
    cin>>N;
    for(int i = 0; i < N; i++)
    {
        cin>>Naredba;
        if(Naredba == 'S')
        {
            cin>>R>>S>>vrijednost;
            matrica[R][S] = vrijednost;
        }
        else if(Naredba=='L')
        {
            cin>>R>>S;
            if(matrica[R][S] == -2)
            {
                broj_greski++;
            }
            else if(matrica[R][S] == 1)
            {
                broj_jedinica++;
            }
            else{
                broj_nula++;
            }
        }
        else{
            brisanje_memorije(matrica);
        }
    }
    cout<<broj_nula<<" "<<broj_jedinica<<" "<<broj_greski;
    return 0;
}
