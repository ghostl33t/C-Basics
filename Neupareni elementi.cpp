#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int Niz[N];
    int pozvani;
    int matica;
    for(int i = 0; i < N; i++)
    {
        cin>>pozvani;
        Niz[i] = pozvani;
        for(int j = 0; j < N; j++)
        {
            if(i != j)
            {
                if(pozvani == Niz[j])
                {
                    Niz[j] = 0;
                    Niz[i] = 0;
                }
            }
        }
    }
    for(int i = 0; i < N; i++)
    {
        if(Niz[i] > 0)
        {
            cout<<Niz[i];
        }
    }
    return 0;
}
