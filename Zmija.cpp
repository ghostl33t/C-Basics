#include <iostream>
/*tekst: zadatak zmija: https://i.imgur.com/ToiAtMs.png */
using namespace std;

int main()
{
    string ulaz;
    int broj_slova,djelilac;
    int R, S;
    char matrica[20][20];
    cin>>ulaz;
    broj_slova = ulaz.length();
    if(broj_slova % 2 == 0){
        djelilac = 2;
        while(broj_slova % (djelilac + 2) == 0)
        {
            djelilac += 2;
        }
    }
    else if(broj_slova % 3 == 0)
    {
        djelilac = 3;
        while(broj_slova % (djelilac + 3) == 0)
        {
            djelilac += 3;
        }
    }
    else{
        cout<<ulaz;
        return 0;
    }
    S = broj_slova / djelilac;
    R = djelilac;
    //broj_slova postavi za index u stringu ulaz...
    broj_slova = 0;
    for(int i = 0; i < R; i++)
    {
        if(i % djelilac == 0 || i == 0){
            for(int j = 0; j < S; j++)
            {
                matrica[i][j] =ulaz[broj_slova];
                broj_slova++;
            }
        }
        else{
            for(int j = S-1; j >= 0; j--)
            {
                matrica[i][j] =ulaz[broj_slova];
                broj_slova++;
            }
        }
    }
    for(int i = 0; i < R; i++)
    {
        for(int j = 0; j < S; j++)
        {
            cout<<matrica[i][j];
        }
        cout<<endl;
    }
    return 0;
}
