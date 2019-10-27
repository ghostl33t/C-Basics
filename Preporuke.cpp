/* Zadatak Preporuke, Broj zadatka 2, tekst zadatka, ulazni i izlazni podatci u linku. Takmicenje iz programiranja 2018.
https://upinitk.ba/wp-content/uploads/2018/04/BILTEN-kantonalno-takmicenje-iz-informatike.pdf */
#include <iostream>

using namespace std;

string inicijalizacija_privremene_liste_0(string lista[10][1])
{
    for(int i = 0; i < 10; i++)
    {
        lista[i][0] = "0";
    }
}

int main()
{
    int n; //broj korisnika stranice
    int k; //broj filmova svakog od filmoljupca
    string ulazni_filmovi; // sa ovim se unose filmovi
    string maidoviFilmovi[10][1]; //lista maidovih filmova
    string filmovi_korisnika[10][1];
    string izlazni_filmovi[10][1];
    bool provjerafilmova = false;
    int brojac_maidovih = 0;
    int brojac_zauzetih_mjesta_izlaznih_filmova = 0;
    cin>>n; //unos broja korisnika
    cin>>k; //unos broja maidovih filmova
    for(int i = 0; i < k; i++) // spremanje maidovih filmova u niz
    {
        cin>>maidoviFilmovi[i][0];
        brojac_maidovih++;
    }
    for(int i = 1; i < n; i++)
    {
        inicijalizacija_privremene_liste_0(filmovi_korisnika);
        provjerafilmova = false;
        cin>>k;
        for(int j = 0; j < k; j++)
        {
            cin>>ulazni_filmovi;
            filmovi_korisnika[j][0] = ulazni_filmovi;
        }
        for(int j = 0; j < 10; j++)
        {
            string privremeni_maidov = maidoviFilmovi[j][0];
            for(int x = 0; x < 10; x++)
            {
                if(privremeni_maidov == filmovi_korisnika[x][0])
                {
                    filmovi_korisnika[x][0] = "0";
                    if(provjerafilmova == false)
                        provjerafilmova = true;
                }
            }
        }
        if(provjerafilmova == true)
        {
             for(int j = 0; j < 10; j++)
             {
                 if(filmovi_korisnika[j][0] != "0"){
                     izlazni_filmovi[brojac_zauzetih_mjesta_izlaznih_filmova][0] = filmovi_korisnika[j][0];
                     brojac_zauzetih_mjesta_izlaznih_filmova++;
                 }
             }
        }
    }
    /* ABECEDNO SORTIRANJEEEE EEHHEHEHE  */
    for(int i = 0; i < 10; i++)
    {
        if(izlazni_filmovi[i][0] != "0")
        {
            string privremeni_izlazni_film = izlazni_filmovi[i][0];
            brojac_zauzetih_mjesta_izlaznih_filmova = 0;
            for(int j = 0; j < 10; j++)
            {
                string privremeni_izlazni_film_za_sortiranje = izlazni_filmovi[j][0];
                if(privremeni_izlazni_film[brojac_zauzetih_mjesta_izlaznih_filmova] < privremeni_izlazni_film_za_sortiranje[brojac_zauzetih_mjesta_izlaznih_filmova])
                {
                    swap(izlazni_filmovi[j][0], izlazni_filmovi[i][0]);
                }
                else if(privremeni_izlazni_film[brojac_zauzetih_mjesta_izlaznih_filmova] == privremeni_izlazni_film_za_sortiranje[brojac_zauzetih_mjesta_izlaznih_filmova])
                {
                    while(privremeni_izlazni_film[brojac_zauzetih_mjesta_izlaznih_filmova] == privremeni_izlazni_film_za_sortiranje[brojac_zauzetih_mjesta_izlaznih_filmova])
                    {
                        brojac_zauzetih_mjesta_izlaznih_filmova++;
                    }
                    if(privremeni_izlazni_film[brojac_zauzetih_mjesta_izlaznih_filmova] < privremeni_izlazni_film_za_sortiranje[brojac_zauzetih_mjesta_izlaznih_filmova])
                    {
                        swap(izlazni_filmovi[j][0], izlazni_filmovi[i][0]);
                    }
                }
            }
        }
    }
    /************************************/
    /*IZBACIVANJE FILMOVA KOJI SE PONAVLJAJUUUU  */
    inicijalizacija_privremene_liste_0(maidoviFilmovi);
    for(int i = 0; i < 10; i++)
    {
        maidoviFilmovi[i][0] = izlazni_filmovi[i][0];
    }
    for(int i = 0; i < 10; i++)
    {
        for(int j = i; j < 10; j++)
        {
            if(izlazni_filmovi[i][0] != "0" && maidoviFilmovi[j][0] != "0")
            {
                if(izlazni_filmovi[i][0] == maidoviFilmovi[j][0] && i != j)
                {
                    maidoviFilmovi[j][0] = "0";
                }
            }
        }
    }
    for(int i = 0; i < 10; i++)
    {
        izlazni_filmovi[i][0] = maidoviFilmovi[i][0];
    }
    /************************************/
    for(int i = 0; i < 10; i++)
    {
        if(izlazni_filmovi[i][0] != "0")
        {
            cout<<izlazni_filmovi[i][0] << " ";
        }
    }
    return 0;
}
