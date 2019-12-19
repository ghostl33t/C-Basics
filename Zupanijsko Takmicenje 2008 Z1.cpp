#include <iostream>
// TEKST ZADATKA: http://hsin.hr/zup08/pasccpp1_zadaci.pdf
// BROJ ZADATKA: 1
using namespace std;

int main()
{
    int niz[1000];
    int dodjeljivac_vrijednosti = 1;
    int A, B, zbir = 0;
    for(int i = 0; i < 1000;)
    {
        int temp_i = dodjeljivac_vrijednosti;
        while(temp_i != 0)
        {
            niz[i] = dodjeljivac_vrijednosti;
            temp_i--;
            i++;
        }
        dodjeljivac_vrijednosti++;
    }
    cin>> A >> B;
    A--;
    B--;
    for(int i = A; i <= B; i++)
    {
        zbir += niz[i];
    }
    cout<<zbir;
    return 0;
}
