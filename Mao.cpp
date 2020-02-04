#include <iostream>
#include <fstream>
using namespace std;
/*Tekst: https://i.imgur.com/TdyPSi3.png*/ 
int main()
{
    ifstream Ulaz("ulaz.in");
    int prviBroj, broj;
    char prvoSlovo, slovo;
    char izlaz[5][2];
    Ulaz>>prvoSlovo>>prviBroj;
    for(int i = 0; i < 5; i++)
    {
        Ulaz>>slovo>>broj;
        if(slovo == prvoSlovo || prviBroj == broj)
        {
            izlaz[i][0] = 'D';
            izlaz[i][1] = 'a';
        }
        else{
            izlaz[i][0] = 'N';
            izlaz[i][1] = 'e';
        }
    }
    for(int i = 0; i < 5; i++)
    {
        cout<<izlaz[i][0]<<izlaz[i][1];
        cout<<endl;
    }
    return 0;
}
