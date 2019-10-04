#include <iostream>

using namespace std;
int Lijeva_Strana_Provjera(char matrica[][100], int& kamen, int& temp_i, int& R);
int Desna_Strana_Provjera(char matrica[][100], int& kamen, int& temp_i, int& R);

int main()
{
	int R, S, K, kamenje;
	int temp_i;
	int Desna = 0;
	cin >> R;
	cin >> S;
	char polje[100][100];
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < S; j++)
		{
			cin >> polje[i][j];
		}
	}
	cin >> K;
	for (int i = 0; i < K; i++)
	{
		Desna = 0;
		cin >> kamenje;
		kamenje = kamenje - 1;
		//UVIJEK JE I 0 JER SE POCINJE OD NULTOG REDA
		temp_i = 0;
		//AKO JE POLJE +1 == '.' SPUSTAJ RED DOLE
		while (polje[temp_i + 1][kamenje] == '.')
		{
			temp_i++;
		}
		//AKO JE ISPOD TRENUTNOG REDA # ILI KRAJ ONDA SPUSTI NA TO MJESTO KAMEN
		if (polje[temp_i + 1][kamenje] == '#' || temp_i + 1 == R)
		{
			polje[temp_i][kamenje] = 'o';
		}
		//AKO JE KAMEN IDI U FUNKCIJE
		else if (polje[temp_i + 1][kamenje] == 'o' && polje[temp_i + 1][kamenje + 1] == '.' && polje[temp_i][kamenje + 1] == '.')
		{
			Desna_Strana_Provjera(polje, kamenje, temp_i, R);
			Desna = 1;
		}
		if (polje[temp_i + 1][kamenje] == 'o' && polje[temp_i + 1][kamenje - 1] == '.' && polje[temp_i][kamenje - 1] == '.' && Desna == 0)
		{
			Lijeva_Strana_Provjera(polje, kamenje, temp_i, R);
		}
	}
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < S; j++)
		{
			cout << polje[i][j];
		}
		cout << endl;
	}
	return 0;
}
int Desna_Strana_Provjera(char matrica[][100], int& kamen, int& temp_i, int& R)
{
	int Desna = 0;
	//ako je sa strane desno i dole desno slobodno spusti red i dodaj jedan stupac
	if (matrica[temp_i + 1][kamen + 1] == '.' && matrica[temp_i][kamen + 1] == '.')
	{
		temp_i++;
		kamen++;
	}
	//dokle god je ispravan uslov odozgo spustaj dole
	while (matrica[temp_i + 1][kamen] == '.')
	{
		temp_i++;
	}
	//ako je ispod polje prepreka il kraj dodaj na to mjesto ovo
	if (matrica[temp_i + 1][kamen] == '#' || temp_i <= R - 1)
	{
		matrica[temp_i][kamen] = 'o';
	}
	//INACE PROSLIJEDI PONOV DESNA STRANA FUNKCIJU
	else if (matrica[temp_i + 1][kamen] == 'o' && matrica[temp_i + 1][kamen + 1] == '.' && matrica[temp_i][kamen + 1] == '.')
	{
		Desna_Strana_Provjera(matrica, kamen, temp_i, R);
		Desna = 1;
	}
	//INACE PROSLIJEDI LIJEVA STRANA FUNKCIJU
	else if (matrica[temp_i + 1][kamen] == 'o' && matrica[temp_i + 1][kamen - 1] == '.' && matrica[temp_i][kamen - 1] == '.' && Desna == 0)
	{
		Lijeva_Strana_Provjera(matrica, kamen, temp_i, R);
	}
	return 1;
}
int Lijeva_Strana_Provjera(char matrica[][100], int& kamen, int& temp_i, int& R)
{
	if (matrica[temp_i + 1][kamen - 1] == '.' && matrica[temp_i][kamen - 1] == '.')
	{
		temp_i++;
		kamen--;
	}
	//dokle god je ispravan uslov odozgo spustaj dole
	while (matrica[temp_i + 1][kamen] == '.')
	{
		temp_i++;
	}
	//ako je ispod polje prepreka il kraj dodaj na to mjesto ovo
	if (matrica[temp_i + 1][kamen] == '#' || temp_i <= R - 1)
	{
		matrica[temp_i][kamen] = 'o';
	}
	//INACE PROSLIJEDI DESNA STRANA FUNKCIJU
	else if (matrica[temp_i + 1][kamen] == 'o' && matrica[temp_i + 1][kamen + 1] == '.' && matrica[temp_i][kamen + 1] == '.')
	{
		Desna_Strana_Provjera(matrica, kamen, temp_i, R);
	}
	//INACE PROSLIJEDI PONOVO LIJEVA STRANA FUNKCIJU
	else if (matrica[temp_i + 1][kamen] == 'o' && matrica[temp_i + 1][kamen - 1] == '.' && matrica[temp_i][kamen - 1] == '.')
	{
		Lijeva_Strana_Provjera(matrica, kamen, temp_i, R);
	}
	return 1;
}

