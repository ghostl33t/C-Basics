#include <iostream>

using namespace std;
/* USLOV: 10<x<100 i 2<n<10 */
void Funkcija(int& Broj)
{
	//cifra = Broj % modul;
	int niz[3] = { 0,0,0 };
	for (int i = 0; i < 3; i++)
	{
		niz[i]= Broj % 10;
		Broj /= 10;
	}
	for (int i = 2; i >= 0; i--)
	{
		cout << niz[i];
	}
}
int main()
{
	int broj, stepen;int broj_krajnji = 1;
	int cifre = 0;
	cout << "Unesite broj: "; cin >> broj;
	cout << "Unesite broj koji ce stepenovati (" << broj << ") dati broj: "; cin >> stepen;
	if (broj < 10 || broj > 100)
	{
		cout<<"GRESKA: Broj mora biti veci od 10 a manji od 100"<<endl;
		return 0;
	}
	if (stepen < 2 || stepen > 10)
	{
		cout << "GRESKA: Stepen mora biti veci od 2 a manji od 10" << endl;
		return 0;
	}
	do {
		broj_krajnji *= broj;
		stepen--;
	} while (stepen > 0);
	Funkcija(broj_krajnji);
	return 0;
}