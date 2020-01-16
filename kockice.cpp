#include <iostream>

using namespace std;

int main()
{
    int n[5] = {0,0,0,0,0};
    int rez[5] = {0,0,0,0,0};
    int broj;
    for(int i = 0; i < 5; i++)
    {
        cin>>broj;
        n[i] = broj;
        for(int j = 0; j < 5; j++)
        {
            if(broj == n[j])
            {
                rez[i]++;
            }
        }
    }
    for(int i = 0; i < 5-1; i++)
    {
        for(int j = 0; j < 5-1-i;j++)
        {
            if(rez[j] > rez[j+1])
            {
                swap(rez[j],rez[j+1]);
            }
        }
    }
    cout<<rez[4];
    return 0;
}
