#include <iostream>
// TEKST ZADATKA: http://hsin.hr/zup08/pasccpp1_zadaci.pdf
// BROJ ZADATKA: 2
using namespace std;
int main()
{
    float N;//broj_rijeci_u_naslovu;
    float M;//broj_rijeci_iz_pjesme;
    float brojac = 0; //broji jednostavno broj pogodjenih rijeci
    string naslov_pjesme[1][50];
    string rijeci_pjesme[1][10000];
    cin>>N;
    for(int i = 0; i < N; i++)
    {
        cin>>naslov_pjesme[0][i];
    }
    cin>>M;
    for(int i = 0; i < M; i++)
        cin>>rijeci_pjesme[0][i];
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(rijeci_pjesme[0][i] == naslov_pjesme[0][j])
            {
                brojac++;
                //ako je rijec pronadjena, nema potrebe brojat ponovo jedne te iste rijeci iz naslova pjesme
                //zato ih postavit treba na neki znak/prazan prostor kako bi se izbjeglo ponavljanje
                for(int x = 0; x < N; x++)
                {
                    if(rijeci_pjesme[0][i] == naslov_pjesme[0][x])
                    {
                        naslov_pjesme[0][x] = "#";
                    }
                }
            }
            //ako je makar pola rijeci iz teksta pjesme u naslovu, ispisi izlaz, zavrsi program!
            if(brojac >= N / 2)
            {
                //posto indeks ide od nule mora se uvecat za jedan izlaz kako bi dobili ispravan rezultat!
                cout<<i + 1;
                return 0;
            }
        }
    }
    return 0;
}
