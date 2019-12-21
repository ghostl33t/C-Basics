#include <iostream>
using namespace std;
// TEKST: https://hsin.hr/zup04/zadaci/srednjoskolska_skupina/prva_podskupina/zadaci.pdf
// BROJ ZADATKA: 1
int main()
{
    int N;
    int ispis = 0;
    int i_priv;
    string broj;
    cin>>N;
    for(int i = 1; i <= N; i++)
    {
        i_priv = i;
        // CIJEPA VRIJEDNOST(SVAKI BROJ ZASEBNO I PRIDRUZUJE STRINGU).
        while(i_priv > 0)
        {
            broj += i_priv % 10 + '0';
            i_priv /= 10;
        }
        //PREBROJI VELICINU STRINGA TJ BROJ ELEMENATA I DODA U ISPIS ZA SVAKI ELEMENAT VRIJEDNOST 1.
        for(int j = 0; j < broj.length(); j++)
        {
            ispis += 1;
        }
        //KAD PREBROJI ZAVRSAVANJE POSTO JE U WHILE broj += MORA SE VRATIT string broj na "".
        broj = "";
    }
    cout<<ispis;
    return 0;
}
