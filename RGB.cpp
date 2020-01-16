#include <iostream>

using namespace std;

int main()
{
    int boje[3];
    int rez = 0;
    for(int i = 0; i < 3; i++)
    {
        cin>>boje[i];
    }
    for(int i = 0; i < 3 - 1; i++)
    {
        for(int j = 0; j < 3 - 1 - i; j++)
        {
            if(boje[j+1] < boje[j])
            {
                swap(boje[j],boje[j+1]);
            }
        }
    }
    rez += boje[1] - boje[0];
    rez += boje[2] - boje[1];
    cout<<rez;
    return 0;
}
