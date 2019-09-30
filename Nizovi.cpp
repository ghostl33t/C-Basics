#include <iostream>

using namespace std;
void Inicijalizacija_Nizova(int niz[100],int &A,int &B) //Initialization of arrays Marko and Darko
{
    // i begining is from 2 and end is on 99, reason why i begin with index 2 is described from 31 to 34 lines of code.
    for(int i = 2; i < 100; i++)
    {
        if(i % 2 == 0)
        {
            niz[i] = niz[i - 1] + A;
        }
        else if(i % 2 != 0)
        {
            niz[i] = niz[i-1] + B;
        }
    }
}
int main()
{
    int A,B,C,D;
    int Marko[100];
    int Darko[100];
    int najmanja_tri_broja[3];
    int brojac_tri_broja = 0;
    int privremeni_Marko = 0;
    int privremeni_Darko = 0;
    int zastavica = 0;
    cin>>A>>B;
    cin>>C>>D;
    Marko[0] = A;
    Marko[1] = A + B;
    Darko[0] = C;
    Darko[1] = C + D;
    Inicijalizacija_Nizova(Marko,A,B);
    Inicijalizacija_Nizova(Darko,C,D);
    for(int i = 0; i < 3;i++)
    {
        najmanja_tri_broja[i] = 0;
    }
    for(int i = 0; i < 100; i++)
    {
        privremeni_Marko = Marko[i];
        privremeni_Darko = Darko[i];
        for(int j = 0; j < 100; j++)
        {
            if(privremeni_Marko == Darko[j] && privremeni_Marko <= privremeni_Darko)
            {
                najmanja_tri_broja[brojac_tri_broja] = privremeni_Marko;
                brojac_tri_broja++;
                i++;
            }
            if(privremeni_Darko == Marko[j] && privremeni_Darko < privremeni_Marko)
            {
                najmanja_tri_broja[brojac_tri_broja] = privremeni_Darko;
                brojac_tri_broja++;
                i++;
            }
        }
    }
    for(int i = 0; i < 3; i++)
    {
        cout<< najmanja_tri_broja[i]<<endl;
    }
    return 0;
}
