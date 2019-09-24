#include <iostream>
using namespace std;
int main(){
    int N;
    int H,M,S;
    char dvotacka;
    cin>>N;
    char Naredbe[N];
    int Vrijeme_Naredbi[N];
    int brojac_U = 0;
    int Marked_Niz[N];
    /* ULAZ */
    for(int i = 0; i < N; i++){
        cin>>Naredbe[i]>>H>>dvotacka>>M>>dvotacka>>S;
        if(Naredbe[i] == 'U')
        {
            brojac_U++;
        }
        Vrijeme_Naredbi[i] = M * 60 + S + H * 3600;
    }
    int Ukupne_Greske[brojac_U],Sati_Greske[brojac_U],Minute_Greske[brojac_U];
    for(int i = 0; i < brojac_U; i++){
        Ukupne_Greske[i] = 0;
        Sati_Greske[i] = 0;
        Minute_Greske[i] = 0;
    }
    for(int i = 0; i < N; i++){
        Marked_Niz[i] = 0;
    }
    int zbir_greski = 0;
    int U = 0;
    for(int i = 0; i < N; i++){
        if(Naredbe[i] == 'U')
        {
            for(int j = 0; j < N - 1; j++){
                int VrijemeI = Vrijeme_Naredbi[i];
                int VrijemeII = Vrijeme_Naredbi[j];
                if(VrijemeI <= 3600 && VrijemeII >= 82800 && Naredbe[j] == 'P'){
                    if(VrijemeI + 86400 - VrijemeII <= 3600){
                        VrijemeI += 86400;
                    }
                }
                if(VrijemeI - VrijemeII <= 3600 && VrijemeI - VrijemeII >= 0 && Naredbe[j] == 'P'){
                    if(Marked_Niz[j] == 0 && Naredbe[j] == 'P')
                    {
                        zbir_greski++;
                        Marked_Niz[j] = 1;
                    }
                    Sati_Greske[U]++;
                    if(VrijemeI - VrijemeII <= 60 )
                    {
                        Minute_Greske[U]++;
                    }
                }
            }
            Ukupne_Greske[U] = zbir_greski;
            U++;
            }
        }
    for(int i = 0; i < brojac_U; i++)
    {
        cout<<Ukupne_Greske[i] << " "<<Sati_Greske[i] << " "<<Minute_Greske[i] << endl;
    }
    return 0;
}
