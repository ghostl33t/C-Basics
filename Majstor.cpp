#include <iostream>
// TEKST ZADATKA http://hsin.hr/zup09/pasccpp2_zadaci.pdf I. ZADATAK MAJSTOR
using namespace std;
//ulaz koraka
void ulaz_znakova(int brojRundi, char znakovi[])
{
	for (int i = 0; i < brojRundi; i++)
	{
		cin >> znakovi[i];
	}
}
int main()
{
	int broj_rundi;
	int broj_bodova = 0;
	int broj_neprijatelja;
	int pomocni_broj_neprijatelja;
	char* znakovi_neprijatelja;
	char* markovi_znakovi;
	cin >> broj_rundi;
	markovi_znakovi = new char[broj_rundi];
	znakovi_neprijatelja = new char[broj_rundi];
	ulaz_znakova(broj_rundi, markovi_znakovi);
	cin >> broj_neprijatelja;
	pomocni_broj_neprijatelja = broj_neprijatelja;
	while (broj_neprijatelja > 0)
	{
		ulaz_znakova(broj_rundi, znakovi_neprijatelja);
		for (int i = 0; i < broj_rundi; i++)
		{
			if (znakovi_neprijatelja[i] == markovi_znakovi[i])
			{
				broj_bodova++;
			}
			else if (znakovi_neprijatelja[i] != markovi_znakovi[i])
			{
				if (znakovi_neprijatelja[i] == 'P' && markovi_znakovi[i] == 'S')
				{
					broj_bodova += 2;
				}
				else if (znakovi_neprijatelja[i] == 'S' && markovi_znakovi[i] == 'K')
				{
					broj_bodova += 2;
				}
				else if (znakovi_neprijatelja[i] == 'K' && markovi_znakovi[i] == 'P')
				{
					broj_bodova += 2;
				}
			}
		}
		
		broj_neprijatelja--;
	}
	cout << broj_bodova << endl << pomocni_broj_neprijatelja * broj_rundi * 2;
	return 0;
}
