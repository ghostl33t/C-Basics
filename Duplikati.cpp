#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int Adrese[N];
    int Adresa;
    int Ne_Duplikati[N];
    int brojac = 0;
    int provjera = 0;
    for(int i = 0; i < N; i++)
    {
        Ne_Duplikati[i] = 0;
    }
    for(int i = 0; i < N; i++)
    {
        cin>>Adresa;
        Adrese[i] = Adresa;
        for(int j = 0; j < N; j++)
        {
            if(i != j)
            {
                if(Adresa == Adrese[j])
                {
                    brojac++;
                }
            }
        }

    }
    cout<<N - brojac;
    return 0;
}
