#include <iostream>
using namespace std;
int main()
{
    int n; //Broj Kula
    bool swapped;
    int brojac = 0;
    cin>>n;
    int niz[n]; // VISINE KULA
    for(int i = 0; i < n; i++)
    {
        cin>>niz[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(niz[j] > niz[j+1])
            {
                swap(niz[j],niz[j+1]);
                swapped = true;
            }
        }
    }
    for(int j = 0; j < n - 1; j++)
    {
        while(niz[j] < niz[n-1])
        {
            if(niz[j] < niz[n-1])
            {
                if(niz[j] + 3 <= niz[n-1])
                {
                    niz[j] += 3;
                    brojac++;
                }
                else if(niz[j] + 2 <= niz[n-1])
                {
                    niz[j] += 2;
                    brojac++;
                }

            }
        }
    }

    cout<<brojac;

    return 0;
}
