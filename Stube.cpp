#include <iostream>

using namespace std;
/* TEKST: https://i.imgur.com/goUEBXj.png */
int main()
{
    int N;
    int niz[20];
    int kockice = 0;
    cin>>N;
    for(int i = 0; i < N+1; i++)
    {
        niz[i]=0;
    }
    for(int i = 0; i < N; i++)
    {
        cin>>niz[i];
    }
    for(int i = 0; i < N+1; i++)
    {
        if(niz[i+1] <= niz[i] && i < N / 2)
        {
            kockice += niz[i] - niz[i+1] + 1;
            niz[i+1] += niz[i] - niz[i+1] + 1;
        }
        else if(i>N/2 && niz[i] <= niz[i+1] && i+1 < N)
        {
            kockice += niz[i+1] - niz[i] + 1;
            niz[i] += niz[i+1] - niz[i] + 1;
        }
    }
    /* Cisto da se provjeri redoslijed brojeva u nizu.
    for(int i = 0; i < N; i++)
    {
        cout<<niz[i] << " ";
    }*/
    cout<<endl<<kockice;
    return 0;
}
