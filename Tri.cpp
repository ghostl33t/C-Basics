#include <iostream>

using namespace std;

int main()
{
    int N; //Pocetni Broj;
    int najmanji = 0; // Ukoliko petlja ide unazad spremiti ovdje najmanji broj
    int najveci = 0; //Ukoliko petlja ide unaprijed, spremiti ovdje najmanji broj
    cin>>N;
    // Ako je sam broj N djeljiv sa 3 nema potrebe racunati ostale brojeve i provjeravati
    if(N % 3 == 0)
    {
        cout<< N;
    }
    else {
            // Provjera za vece brojeve od N koji su djeljivi sa 3 i ujedno najblizi broju N
            for(int i = N; i < 1000; i++)
            {
                if(i % 3 == 0)
                {
                    najveci = i;
                    break;
                }
            }
            // Provjera za manje brojeve od N koji su djeljivi sa 3 i ujedno najblizi broju N
            for(int i = 1; i <N; i++)
            {
                if(i % 3 == 0)
                {
                    najmanji = i;
                }
            }
            // Ako je najmanji broj ,blizi od najveceg broja, broju N, onda: ispis ce biti najmanjeg broja
            if(N - najmanji < najveci - N)
            {
                cout<<najmanji;
            }
            // Inace ispisuje se veci najblizi broj
            else cout<<najveci;
    }
    return 0;
}
