#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string Slova;
    char privremeni;
    for(int i = 0; i < 20; i++)
    {
        Slova[i] = '1';
    }
    int velicina = 0;
    cin>>Slova;
    for(int i = 0; i < 20; i++)
    {
        if(Slova[i] == '1')
        {
            break;
        }
        if(Slova[i] != '1')
        {
            velicina++;
        }
    }
    int Brojac_Ponavljanja[velicina - 1];
    for(int i = 0; i < velicina - 1; i++)
    {
        Brojac_Ponavljanja[i] = 0;
    }
    for(int i = 0; i < velicina - 1; i++)
    {
        privremeni = Slova[i];
        for(int j = 0; j < velicina - 1; j++)
        {
            if(privremeni == Slova[j])
            {
                Brojac_Ponavljanja[i]++;
            }
        }
    }
    velicina = velicina - 1;
    for(int i = 0; i < velicina - 1; i++)
    {
        for(int j = 0; j < velicina - 1 - i; j++)
        {
            if(Brojac_Ponavljanja[j] < Brojac_Ponavljanja[j + 1])
            {
                swap(Brojac_Ponavljanja[j], Brojac_Ponavljanja[j+1]);
                swap(Slova[i],Slova[i + 1]);
            }
        }
    }
    cout<<Slova[0] << endl << Brojac_Ponavljanja[0];
    return 0;
}
