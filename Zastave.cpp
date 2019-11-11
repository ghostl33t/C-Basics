/* ZADATAK SA TAKMICENJA IZ PROGRAMIRANJA 2010 GODINE.
TEKST ZADATKA: http://hsin.hr/skolsko2010/pasccpp2_zadaci.pdf
BROJ ZADATKA I IME: ZADATAK BR2, ZASTAVE */
#include <iostream>

using namespace std;

void matrica_ulaz(char matrica[][9])
{
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            cin>>matrica[i][j];
        }
    }
}

int main()
{
    char matrica[6][9]; //matrica koja se unosi
    int brojaci_istih_znakova[9] = {0,0,0,0,0,0,0,0,0}; //brojaci koji se sluzit za odabir znaka koji je "glavni"
    int brojac_horizontalno = 0; //horizontalni broj ako je manji od vretikalnog njega printat
    int brojac_vertikalno = 0; //odozgo samo suportno
    int temp_j = 0; // privremeni j
    int temp_i = 0; //privremeni i
    char temp_char[9]; //znakovi koji ce se rotirat u zavisnosti od brojaca istih znakova
    // ulaz
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            cin>>matrica[i][j];
        }
    }
    /* HORIZONTALNO PROVJERA */
    do{for(int i = temp_i; i < temp_i + 1; i++)
    {
        //prebrojava sa ovom petljom koliko ima istih znakova u odredjenom redu
        temp_char[i] = matrica[i][temp_j];
        for(int j = 0; j < 9; j++)
        {
            if(temp_char[i] == matrica[i][j])
            {
                brojaci_istih_znakova[i]++;
            }
        }
        temp_j++;
    }
    //kad ih prebroji, sortiranjem rojaca_istih_znakova sortira se automatski i slovo tj. karakter koji se najvise
    //puta ponavlja, te je on ostavljen pod temp_char[0] i on ce se mijenjat sa svakim karakterom koji jednak njemu
    for(int i = 0; i < 9 - 1; i++)
    {
        for(int j = 0; j < 9 - 1 - i; j++)
        {
            if(brojaci_istih_znakova[j] < brojaci_istih_znakova[j+1])
            {
                swap(brojaci_istih_znakova[j],brojaci_istih_znakova[j+1]);
                swap(temp_char[j],temp_char[j+1]);
            }
        }
    }
    //provjera i uvecavanje horizontalnog brojaca ukoliko temp[0] nije jednak sa matricom[i][j]
    //ako nije jednak, uvecaj horizontalni brojac za jedan, ako jeste, ne radi nista
    for(int i = temp_i; i < temp_i+1; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(temp_char[0] != matrica[i][j])
            {
                brojac_horizontalno++;
            }
        }
    }
    //ovaj niz, sa svakim zavrsenim redom se ponovo mora vratiti na nulu jer sluzi za rotiranje najcesce ponavljanog
    //karaktera u odredjenom redu
    for(int i = 0; i < 9; i++)
    {
        brojaci_istih_znakova[i] = 0;
    }
    //kad se sve zavrsi, prebaci se u novi red
    temp_i++;
    //ponavljaj ovu radnju sve dok temp_i ne dodje to maksimuma to jeste do broja 5(ukljucujuci i njega)
    }while(temp_i < 6);
    /* VERTIKALNA PROVJERA */
    temp_i = 0;
    temp_j = 0;
    do{
    for(int i = 0; i < 6; i++)
    {
        temp_char[i] = matrica[i][temp_j];
        for(int j = temp_j; j < temp_j+1; j++)
        {
            if(temp_char[i] == matrica[i][j])
            {
                brojaci_istih_znakova[j]++;
            }
        }
        temp_i++;
    }
    for(int i = 0; i < 6 - 1; i++)
    {
        for(int j = 0; j < 6 - 1 - i; j++)
        {
            if(brojaci_istih_znakova[j] < brojaci_istih_znakova[j+1])
            {
                swap(brojaci_istih_znakova[j],brojaci_istih_znakova[j+1]);
                swap(temp_char[j],temp_char[j+1]);
            }
        }
    }
    for(int i = 0; i < 6; i++)
    {
        for(int j = temp_j; j < temp_j+1; j++)
        {
            if(temp_char[0] != matrica[i][j])
            {
                brojac_vertikalno++;
            }
        }
    }
    for(int i = 0; i < 6; i++)
    {
        brojaci_istih_znakova[i] = 0;
    }
    temp_j++;
    }while(temp_j < 9);
    if(brojac_vertikalno < brojac_horizontalno)
        cout<<brojac_vertikalno;
    else
        cout<<brojac_horizontalno;
    return 0;
}
