#include <iostream>
using namespace std;
/* ZADATAK BR 1: STEAK: https://hsin.hr/honi/kolo5_zadaci.pdf */
int main()
{
    int N;
    int danuMjesecu;
    string nazivMjeseca;
    string izlaz = "";
    string niz_mjeseci[12];
    niz_mjeseci[0] = "SIJECANJ";
    niz_mjeseci[1] = "VELJACA";
    niz_mjeseci[2] = "OZUJAK";
    niz_mjeseci[3] = "TRAVANJ";
    niz_mjeseci[4] = "SVIBANJ";
    niz_mjeseci[5] = "LIPANJ";
    niz_mjeseci[6] = "SRPANJ";
    niz_mjeseci[7] = "KOLOVOZ";
    niz_mjeseci[8] = "RUJAN";
    niz_mjeseci[9] = "LISTOPAD";
    niz_mjeseci[10] = "STUDENI";
    niz_mjeseci[11] = "PROSINAC";
    cin>>N;
    for(int i = 0; i < N; i++)
    {
        if(i > 0)
            izlaz+= "\n";
            cin>>danuMjesecu;
            cin>>nazivMjeseca;
            for(int j = 0; j < 12; j++)
            {
                if(nazivMjeseca == niz_mjeseci[j])
                {
                    danuMjesecu += 30 * (j);
                }
            }
            if(danuMjesecu % 2 == 0)
            {
                izlaz+="BROKULA";
            }
            else izlaz+= "MRKVA";
    }
    cout<<izlaz;
    return 0;
}
