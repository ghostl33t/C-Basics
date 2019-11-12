#include <iostream>
/* ZUPANIJSKO TAKMICENJE (HRVATSKA, 2009, PODSKUPINA 1, ZADATAK BR1[NOP])  */
/* TEKST ZADATKA I TESTNI ULAZI I IZLAZI: http://hsin.hr/zup09/pasccpp1_zadaci.pdf */
using namespace std;

int main()
{
    string Ulaz; //ulazni string
    int brojac_NOP = 0; //brojac NOP naredbi koje je potrebno umetnuti
    int niz[200]; //niz koji ce pratiti sva velika slova i pamtiti njihove indexe
    cin>>Ulaz;
    for(int i = 0; i < 200; i++)
    {
        niz[i] = 0; //postaviti niz na nulu
    }
    for(int i = 0; i < Ulaz.length(); i++)
    {//provjeravati ako je ulazn[i] veliko slovo, postvaiti u niz[i] na isti index gdje je veliko slovo vrijednost
        //indexa od Ulaz[i]
        if(isupper(Ulaz[i]))
        {
            niz[i] = i;
        }
    }
    for(int i = 0; i < 200; i++)
    {
        //ako je niz[i] veci od nula izbjegava i pomjeranje niz[0] jer je i on jednak nuli
        if(niz[i] > 0)
        {
            //dokle god trenutna vrijednost niza je ne djeljiva sa 4, dodaji na vrijednost tog niza +1
            //zatim sa for j petljom ce "pomjerit" mjesta ostalih elemenata koji su veci od nule
            while(niz[i] % 4 != 0){
            niz[i]++;
            for(int j = i+1; j < 200; j++)
            {
                if(niz[j] > 0)
                    niz[j]++;
            }
            //uvecaj broj NOP operacija
            brojac_NOP++;}
        }
    }
    //ISPIS
    cout<<brojac_NOP;
    return 0;
}
