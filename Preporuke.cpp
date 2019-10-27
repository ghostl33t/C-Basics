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
    string filmovi_korisnika[10][1]; //String niz koji ce se koristit za svakog korisnika pri unosu filma i smjestat ce se u njega
    string izlazni_filmovi[10][1]; //izlazni niz filmova
    bool provjerafilmova = false; //provjera koja ce koristit se dole(ispod objasnjenje)
    int brojac_maidovih = 0; //brojac maidovih filmova
    int brojac_zauzetih_mjesta_izlaznih_filmova = 0;//brojac zauzetih mjesta mora se koristit da ne bi doslo do pisanja u vec zauzeto mjesto odredjenog filma
    cin>>n; //unos broja korisnika
    cin>>k; //unos broja maidovih filmova
    for(int i = 0; i < k; i++) // spremanje maidovih filmova u niz
    {
        cin>>maidoviFilmovi[i][0];
        brojac_maidovih++; //brojac maidovih filmova se uvecava svakim unosom
    }
    for(int i = 1; i < n; i++)
    {
        inicijalizacija_privremene_liste_0(filmovi_korisnika); //lista korisnika ce poslije svakog unosa korisnika biti refreshovana tj. postavljena na "0" uz pomoc ove funkcije kako ne bi doslo do mijesanja
        provjerafilmova = false; //provjera filmova za spremanje 
        cin>>k; //unosi se broj filmova svakog korisnika
        for(int j = 0; j < k; j++)//unosi se ime filmova svakog korisnika i smijesta u filmovi_korisnika niz
        {
            cin>>ulazni_filmovi;
            filmovi_korisnika[j][0] = ulazni_filmovi;
        }
        for(int j = 0; j < 10; j++) //ako neki film iz liste korisnickih filmova postoji u maidovoj listi, psotavit ga na "0" radi izbacivanja istog i ostalih provjera
        {
            string privremeni_maidov = maidoviFilmovi[j][0];
            for(int x = 0; x < 10; x++)
            {
                if(privremeni_maidov == filmovi_korisnika[x][0])
                {
                    filmovi_korisnika[x][0] = "0";
                    if(provjerafilmova == false)
                        provjerafilmova = true; //ova provjera ce sluzit za smijestanje u izlazne filmove, to jest sluzi za pisanje svih filmova koje korisnik ima a nema maid a korisnik ima neki film koji ima maid koji je oznacen sa "0"
                }
            }
        }
        if(provjerafilmova == true)
        {
             for(int j = 0; j < 10; j++) //smijesta izlazne filmove
             {
                 if(filmovi_korisnika[j][0] != "0"){
                     izlazni_filmovi[brojac_zauzetih_mjesta_izlaznih_filmova][0] = filmovi_korisnika[j][0];
                     brojac_zauzetih_mjesta_izlaznih_filmova++;//uvecava se ovaj brojac da ne bi doslo do upisa u vec zauzeto mjesto
                 }
             }
        }
    }
    /* ABECEDNO SORTIRANJEEEE EEHHEHEHE  */
// koristim brojac+zauzetih_mjesta_izlaznih_filmova da ne bi pravio novu varijablu, psotavljam je u petlji na 0 i koristim ga kao index pomocnih stringova koji provjeravaju slova i redanje filmova po abecedi
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
    inicijalizacija_privremene_liste_0(maidoviFilmovi); //da ne bi kreiro novi string niz, laske je postavit maidove na "0" filmove (nemaju vise svrhu)
    for(int i = 0; i < 10; i++)
    {
        maidoviFilmovi[i][0] = izlazni_filmovi[i][0]; //izjednacit maidove sa izlaznim filmovima
    }
    for(int i = 0; i < 10; i++) //provjeri sve filmove kroz ove dvije petlje i jednostavno izbaci duplikate tj. postavlja ih na "0" u nizu maidoviFilmovi
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
    }//posto smo radili promjene u maidoviFilmovi, izjednacit izlazni_filmovi sa maidoviFilmovi je potrebno za ispis
    for(int i = 0; i < 10; i++)
    {
        izlazni_filmovi[i][0] = maidoviFilmovi[i][0];
    }
    /************************************/
    for(int i = 0; i < 10; i++) //ispis filmova...
    {
        if(izlazni_filmovi[i][0] != "0")//"0" je znak koji se kroistio za izbacivanje filmova, tako da sve osim njega ispisat na ekran
        {
            cout<<izlazni_filmovi[i][0] << " ";
        }
    }
    return 0;
}
