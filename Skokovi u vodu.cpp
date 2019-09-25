#include <iostream>

using namespace std;

int main()
{
    int ocjeneSudaca[5] = {0,0,0,0,0};
    int R = 0; //Rezultat ocjena sudaca
    //Unos ocjena sudaca
    for(int i = 0; i < 5; i++)
    {
        cin>>ocjeneSudaca[i];
    }
    // Algoritam sortiranja niza
    for(int i = 0; i < 5 - 1; i++)
    {
        for(int j = 0; j < 5 - i - 1; j++)
        {
            if(ocjeneSudaca[j] > ocjeneSudaca[j + 1])
            {
                swap(ocjeneSudaca[j],ocjeneSudaca[j+1]);
            }
        }
    }
    //Posto je niz sortiran, najmanja i najveca ocjena se oduzimaju na taj nacin
    //da ce i poceti od 1 i zavrsavati na 3 to jest i ce ici do 4.
    for(int i = 1; i < 4; i++)
    {
        R += ocjeneSudaca[i];
    }
    //Ispis
    cout<<R;
    return 0;
}
