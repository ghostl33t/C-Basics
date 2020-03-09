#include <iostream>
#include <string>
using namespace std;
/*HR ZUPANIJSKO TAKMICENJE IZ PROGRAMIRANJA PODSKUPINA 2 Z4 2004 GODINA: https://hsin.hr/zup04/zadaci/srednjoskolska_skupina/druga_podskupina/zadaci.pdf */
int main()
{
    int N, M, brojac = 0;
    int temp;
    cin>>N>>M;
    temp = N;
    if(M < temp)
        temp = M;
    brojac = 2 * (temp - 1);
    if(N > M)
        brojac++;
    cout<<brojac;
    return 0;
}
