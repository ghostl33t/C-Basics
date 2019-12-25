#include <iostream>
#include <iomanip>
using namespace std;
/* TEKST ZADATKA: https://hsin.hr/zup08/pasccpp2_zadaci.pdf
BROJ ZADATKA: 3
OBJASNJENJE RJESENJA: 
Posto imena varijabli bi bila preduga, oznake za imena sljedecih varijabli su:
KSG = Kolicina sastojaka za 1 porciju u gramima
KSUK = Kolicina sastojaka kojih ima trenutno u kuhinji (za namjernicu)
VMPG = Velicina malog pakiranja u gramima u prodavnici
CMP = Cijena malog pakiranja u prodavnici
VVPG = Velicina velikog pakiranja u gramima u prodavnici
CVP = Cijena velikog pakiranja u prodavnici
u matricu smijestam sve ove brojeve, jer je poslije unosa ponovo je potrebno uzimati pojedinacno svaki sastojak kako bi program radio ispravno
X je oznaka koliko jos fali porcija u gramima tj za svaku porciju koliko je jos potrebno nakon sto se oduzme potreban broj
grama za prociju i grama za porciju u kuhinji trenutno
KSUKU je ukupan broj grama svih sastojaka u kuhinji
KPN je ukupan broj grama potrebnih za jednu porciju
rezultat ce biti jednak: KSUKU / KPN.
temp_k koristim zato jer je potrebno blokirati while petlju prvi put kada je uslov K == temp_k zadovoljen
jer ako niti jednom od N puta izvrsenja for petlje nije promjenjena kolicina novca koju Liza ima, znaci 
ona nema para vise da uzme namirnica, te tada je potrebno blokirati petlju tj. koristim break;*/
int main()
{
    float N, K,KPN, KSUKU, temp_k;
    float KSG, KSUK, VMPG,CMP,VVPG,CVP;
    float rezultat;
    int matrica[100][6];
    int X[100]; // provjera koliko grama fali
    cin>>N>>K;
    temp_k = K;
    KSUKU = 0;
    KPN = 0;
    for(int i = 0; i < N; i++)
    {
        cin>>KSG>>KSUK>>VMPG>>CMP>>VVPG>>CVP;
        KSUKU += KSUK;
        KPN += KSG;
        matrica[i][0] = KSG;
        matrica[i][1] = KSUK;
        matrica[i][2] = VMPG;
        matrica[i][3] = CMP;
        matrica[i][4] = VVPG;
        matrica[i][5] = CVP;
        X[i] = KSG - KSUK;
        if(X[i] > 0 && K >= CMP || K >= CVP)
        {
            while(X[i] > 0 && K >= CMP || K >= CVP)
            {
                if(matrica[i][3] < matrica[i][5] && X[i] + matrica[i][2] >= matrica[i][0])
                {
                    K = K - matrica[i][3];
                    KSUKU += VMPG;
                }
                else{KSUKU += VVPG; K = K - matrica[i][5];}
            }
        }
    }
    temp_k = K;
    while(K > 0)
    {
        for(int i = 0; i < N; i++)
        {
            if(X[i] > 0 && K >= matrica[i][3] || K >= matrica[i][5])
            {

                if(matrica[i][3] < matrica[i][5] && X[i] + matrica[i][2] >= matrica[i][0])
                {
                    K = K - matrica[i][3];
                    KSUKU += matrica[i][2];
                }
                else{KSUKU += matrica[i][4]; K = K - matrica[i][5];}
            }
        }
        if(temp_k == K)
        {
            break;
        }
    }
    rezultat = KSUK / KPN;
    cout<<setprecision(0)<<rezultat * 10;
    cout<<fixed;
    return 0;
}
