#include <iostream>
 
using namespace std;
 
 /* OBJASNJENJE
 U zadatku potrebno je u matricu koja se sastoji od 9 redova i 5 stupaca, na osnovu elemenata petocifrenog unesenog broja,
postaviti X znakova u odredjene pozicije. 
TEST ULAZ:
12345
IZLAZ: 
-----------------------------------------------------------------





    X
   XX
  XXX
 XXXX
XXXXX
------------------------------------------------------------------
Dakle posto je prvi broj 1, na to mjesto se spusta X, sljedeci broj je 2, u stupac 1 se spusta XX(jedan ispod drugog), itd...*/
 
 
 
void inicijalizacija_matrice(char matrica[][5]);
int ulaz(int&broj);
char postavljanje_Xova(int&broj, int& proveravac, char matrica[][5], int& i, int& j);
 
int main()
{
    int broj = 0, provjeravac = 0;
    int i = 0;
    int j = 0;
    char matrica[9][5];
    inicijalizacija_matrice(matrica);
    ulaz(broj);
    postavljanje_Xova(broj,provjeravac,matrica,i,j);
    //ISPIS
    for(i = 8; i >= 0; i--)
    {
        for(j = 4; j >= 0; j--)
        {
            cout<<matrica[i][j];
        }
        cout<<endl;
    }
    return 0;
}
void inicijalizacija_matrice(char matrica[][5])
{
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            matrica[i][j] = ' ';
        }
    }
}
int ulaz(int&broj)
{
    cin>>broj;
    //ukoliko broj koji se unese ima manje ili vise cifara od 5, slijedi ispis greske i kraj programa.
    if(broj < 10000 || broj >= 100000)
    {
        cout<<"Greska: Broj ima vise ili manje cifara od 5"<<endl;
        return 0;
    }
}
char postavljanje_Xova(int&broj, int& proveravac, char matrica[][5], int& i, int& j)
{
//uzima zadnji elemenat u broju
    proveravac = broj%10;
    //taj isti elemenat kroz while petlju dok je veci od nula, umanji ga za 1 i dodaj jedan X u trenutni stupac i red
        while(proveravac > 0)
        {
            matrica[i][j] = 'X';
            proveravac--;
            i++;
        }
        //na kraju ukloni zadnji elemenat koji je iskoristen za provjeru
    broj = broj / 10;
    //sa j++ prelazi se u novi stupac, sa i = 0 postavljamo uvijek da sljedeca provjera krece od matrica[0][j]
    i = 0;
    j++;
    //ako je j < 5, vrati ponovo ovu funkciju, ako nije, u mainu ce se izvrsit  ispis u obrnutom redoslijedu
    if(j < 5)
    {
        return postavljanje_Xova(broj,proveravac,matrica,i,j);
    }
}
