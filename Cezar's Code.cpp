#include <iostream>
#include <string>
using namespace std;
/* AKO SE SIFRIRA IDE SA PLUSOM AKO SE DESIFRIRA IDE SA MINUSOM TO JE CAKA !!! */
int Unos_i_Provjere(string& rijec,int& pomak, int& odabir)
{
    cin>>rijec;
    if(rijec.length() > 100)
    {
        return 0;
    }
    cin>>pomak;
    if(pomak < 1 || pomak > 26)
    {
        return 0;
    }
    cin>>odabir;
    if(odabir != 1 || odabir != 2)
    {
        return 0;
    }
}
int Pomjeranje(string& rijec, int& pomak, int& odabir)
{
    int cuvar_pomaka = pomak;
    if(odabir == 1)
    {
        for(int i = 0; i < rijec.length(); i++)
        {
            pomak = cuvar_pomaka;
            if(rijec[i] == 122)
                    {
                        rijec[i] = 97;
                        pomak = pomak -1;
                        rijec[i] += pomak;
                        pomak = 0;
                    }
            if(rijec[i] + pomak > 122)
            {
                do{
                    rijec[i] += 1;
                    pomak --;
                    if(rijec[i] == 122)
                    {
                        rijec[i] = 97;
                        pomak = pomak -1;
                        rijec[i] += pomak;
                        pomak = 0;
                    }
                }while(pomak > 0);
            }
            else
            rijec[i] = rijec[i] + pomak;
        }
    }
    else if(odabir == 2)
    {
        for(int i = 0; i < rijec.length(); i++)
        {
            pomak = cuvar_pomaka;
            if(rijec[i] == 97)
                    {
                        rijec[i] = 122;
                        pomak = pomak -1;
                        rijec[i] -= pomak;
                        pomak = 0;
                    }
            if(rijec[i] + pomak > 122)
            {
                do{
                    rijec[i] -= 1;
                    pomak --;
                    if(rijec[i] == 97)
                    {
                        rijec[i] = 122;
                        pomak = pomak -1;
                        rijec[i] -= pomak;
                        pomak = 0;
                    }
                }while(pomak > 0);
            }
            else
            rijec[i] = rijec[i] - pomak;
        }
    }
    return 0;
}
int main()
{
    string Rijec;
    int Pomak;
    int odabir; //desifrovanje ili sifriranje
    Unos_i_Provjere(Rijec,Pomak,odabir);
    Pomjeranje(Rijec,Pomak,odabir);
    cout<<Rijec;
    return 0;
}
