#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int N,x,y;
    float X = 0;
    float Y = 0;
    bool swapped;
    float rez;
    cin>>N;
    float niz[N];
    for(int i = 0; i < N; i++)
    {
        niz[i] = 0;
    }
    for(int i = 0; i < N; i++)
    {
        cin>>x>>y;
        if(x < -1000 || x > 1000 || y < -1000 || y > 1000)
        {
            return 0;
        }
        X += x;
        Y += y;
        if(x < 0)
        {
            x = x * (-1);
        }
        if(y < 0)
        {
            y = y * (-1);
        }
        niz[i] += x + y;
    }
    for(int i = 0; i < N - 1; i++)
    {
        swapped = false;
        for(int j = 0; j < N - 1 - i; j++)
        {
            if(niz[j] > niz[j + 1])
            {
                swap(niz[j],niz[j + 1]);
                swapped = true;
            }
        }
    }
    cout<<X << " ";
    cout<<Y;
    cout<<endl;
    rez = X + Y - niz[0];
    if(rez < 0)
    {
        rez = rez * (-1);
    }
    cout<<fixed;
    cout<<setprecision(2)<<rez;
    return 0;
}
