#include <iostream>

using namespace std;
/*TEKST: https://hsin.hr/zup08/pasccpp2_zadaci.pdf 
BROJ ZADATKA: 1*/
int main()
{
    int N, K, B, broj, i = 0;
    int zbir = 0;
    int niz[1000];
    cin>>N>>K>>B;
    while(i < N)
    {
        cin>>broj;
        niz[i] = broj;
        i++;
    }
    i = 0;
    for(int j = N; j < 1000; j++)
    {
        niz[j] = niz[i];
        i++;
        if(i == N)
        {
            i = 0;
        }
        if(j == 999)
        {
            break;
        }
    }
    K = K + B;
    for(int i = B - 1; i < K - 1; i++)
    {
        zbir += niz[i];
    }
    cout<<zbir;
    return 0;
}
