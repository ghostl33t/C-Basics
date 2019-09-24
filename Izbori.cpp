#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int niz[n];
    int ispisni_niz[n];
    int zbir_glasova = 0;
    for(int j = 0; j < n; j++)
    {
        ispisni_niz[j] = 0;
    }
    for(int j = 0; j < n; j++)
    {
        cin>>niz[j];
        zbir_glasova += niz[j];
    }
    for(int j = 0; j < n; j++)
    {
        if(niz[j] == niz[j + 1])
        {
                ispisni_niz[j] = 1;
                ispisni_niz[j + 1] = 0;
        }
        else if(niz[j] > niz[j + 1] && niz[j] == niz[j - 1])
        {
            ispisni_niz[j] = 0;
        }
        else if(niz[j] > niz[j + 1])
        {
            ispisni_niz[j] = 1;
            ispisni_niz[j + 1] = 0;
        }
        else if(niz[j] < niz[j + 1])
        {
            ispisni_niz[j] = 0;
            ispisni_niz[j + 1] = 1;
        }
    }
    for(int j = 0; j < n; j++)
    {
        cout<<ispisni_niz[j];
    }
    return 0;
}
