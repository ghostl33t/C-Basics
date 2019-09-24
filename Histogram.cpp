#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*   INTERVALI  */
    float Od;
    float Do;
    cin>> Od >> Do;
    float cuvar = Od;
    /* ************ */
    int Broj_Zaba;
    int postotak = 0;
    int N;//Podjela intervala na N jednakih dijelova...
    cin>>N;

    int Brojac_Zaba_Po_Intervalima[N];
    for(int i = 0; i < N; i++)
    {
        Brojac_Zaba_Po_Intervalima[i] = 0;
    }

    cin>>Broj_Zaba;
    float Zabe[Broj_Zaba];
    /* Unos dimenzija zabetina */
    for(int i = 0; i < Broj_Zaba; i++)
    {
        cin>>Zabe[i];
    }
    /* Podjela intervala */
    float Niz_Intervala_Od[N];
    float Niz_Intervala_Do[N];
    for(int i = 0; i < N; i++)
    {
        Niz_Intervala_Od[i] = cuvar;
        Niz_Intervala_Do[i] = cuvar + Do / 4;
        cuvar += Do / 4;
    }
    /* ***************** */
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < Broj_Zaba; j++)
        {
            if(Zabe[j] > Niz_Intervala_Od[i] && Zabe[j] < Niz_Intervala_Do[i])
            {
                Brojac_Zaba_Po_Intervalima[i]++;
            }
            if(Zabe[j] == Niz_Intervala_Do[i])
            {
                Brojac_Zaba_Po_Intervalima[i + 1]++;
            }
        }
    }
    cout<<fixed;
    cout<<setprecision(3);
    for(int i = 0; i < N; i++)
    {
        cout<<"[" << Niz_Intervala_Od[i] << ", " << Niz_Intervala_Do[i] << "): " << Brojac_Zaba_Po_Intervalima[i] << " ";
        postotak = Brojac_Zaba_Po_Intervalima[i] * 100 / Broj_Zaba;
        for(int j = 0; j < postotak; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
