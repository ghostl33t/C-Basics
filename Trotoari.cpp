#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    int rezultati[4];
    bool swapped;
    cin>>a>>b>>c;
    rezultati[0] = a + b + c;
    rezultati[1] = a * b * c;
    rezultati[2] = a * b + c;
    rezultati[3] = a + b * c;
    for(int i = 0; i < 4 - 1; i++)
    {
        swapped = false;
        for(int j = 0; j < 4 - 1 - i; j++)
        {
            if(rezultati[j] > rezultati[j+1])
            {
                swap(rezultati[j],rezultati[j+1]);
                swapped = true;
            }
        }
    }
    cout<<rezultati[0];
    return 0;
}
