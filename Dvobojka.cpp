#include <iostream>

using namespace std;
void Ispis(int &vel, int niz[])
{
    for(int i = 0; i < vel; i++)
    {
        if(niz[i] != 0)
        cout<<niz[i]<<endl;
    }
}
int main()
{
    int N;
    cin>>N;
    int niz[N];
    int parni[N];
    int neparni[N];
    for(int i = 0; i < N; i++)
    {
        cin>>niz[i];
        parni[i] = 0;
        neparni[i] = 0;
    }
    for(int i = 0; i < N; i++)
    {
        if(niz[i] % 2 == 0)
        {
            parni[i] = niz[i];
        }
        else if(niz[i] % 2 != 0)
        {
            neparni[i] = niz[i];
        }
    }
    Ispis(N, parni);
    Ispis(N,neparni);
    return 0;
}
