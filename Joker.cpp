#include <iostream>
#include <string>
using namespace std;
/*TEXT OF EXERCISE: https://upinitk.ba/wp-content/uploads/2018/01/Bilten2016.pdf
EXERCISE: 3(JOKER)*/
/* JOKER/BINGO/TOMBOLA */
/*
TEST IN:
12 35 1 2 23 39
151239
251229
251339
OUT:
II. Vrsta
Nedobitan
V. Vrsta
*/
//Input of tickets
void Ulaz_Listica(char Listic[])
{
    for(int i = 0; i < 6; i++)
    {
        cin>>Listic[i];
    }
}
// checking and printing on screen result of ticket
void Provjera_Dobitka(char Dobitni[],char Listic[],int& dobitak)
{
    for(int i = 5; i >= 0; i--)
    {
        if(Dobitni[i] == Listic[i])
        {
            dobitak++;
        }
        else if(Dobitni[i] != Listic[i])
        {
            break;
        }
    }
    switch(dobitak)
    {
        case 0: cout<<"Nedobitan"<<endl;
        break;
        case 1: cout<<"Nedobitan"<<endl;
        break;
        case 2: cout<<"V. Vrsta"<<endl;
        break;
        case 3: cout<<"IV. Vrsta"<<endl;
        break;
        case 4: cout<<"III. Vrsta"<<endl;
        break;
        case 5: cout<<"II. Vrsta"<<endl;
        break;
        case 6: cout<<"I. Vrsta"<<endl;
        break;
        default:
        break;
    }
    dobitak = 0;
}
int main()
{

    int Ulazni_Broj_Dobitnog_Listica;
    char Dobitni_Listic[6];
    char Listic1[6];
    char Listic2[6];
    char Listic3[6];
    int dobitak = 0;
    //converting int to char and put in char-array values of integers
    for(int i = 0; i < 6; i++)
    {
        cin>>Ulazni_Broj_Dobitnog_Listica;
        Dobitni_Listic[i] = Ulazni_Broj_Dobitnog_Listica % 10 + '0';
    }
    //input of tickets
    Ulaz_Listica(Listic1);
    Ulaz_Listica(Listic2);
    Ulaz_Listica(Listic3);
    //cout and check of tickets and results
    Provjera_Dobitka(Dobitni_Listic,Listic1,dobitak);
    Provjera_Dobitka(Dobitni_Listic,Listic2,dobitak);
    Provjera_Dobitka(Dobitni_Listic,Listic3,dobitak);
    return 0;
}
