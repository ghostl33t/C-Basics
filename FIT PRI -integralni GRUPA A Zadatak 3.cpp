#include <iostream>
/* Napisati glavni program i funkciju medij koja se poziva naredbom medij(v,n) i koja nalazi medijan tj.  
srednji član u sortiranom nizu v. 
Ako je n paran, tada je medijan aritmetička sredina od srednja dva člana. 
Ako je n neparan, tada je medijan član u sredini (na n/2-om mjestu). 
U glavnom programu korisnik unosi veličinu niza n (1<=n<=10) te članove niza koje prije proslijeđivanja funkciji sortira,
poziva funkciju te ispisom na ekran dobija medijan.*/
using namespace std;

void medij(float v[], int n)
{
	// if length of array is odd number then print on screen element with index n / 2
	if (n % 2 != 0)
	{
		cout << v[n / 2];
	}
	// if length of array is even number then print on screen arithmetic mean of element with [n / 2] index and element with
	// [n / 2 - 1] index;
	else if(n % 2 == 0)
	{
		float rez = (v[n / 2] + v[n / 2 - 1]) / 2;
		cout << rez;
	}
}

int main()
{
	//Length of array is N
	int N;
	//Input length of array:
	cin >> N;
	//checking if length of array is biger than 10 or lower than 1, if this condition is "true" then stop program!
	if (N > 10 || N < 1)
	{
		return 0;
	}
	//Seting Array length to N
	float *v = new float[N];
	//Input of array elements:
	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}
	//Sort of Array
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - 1 - i; j++)
		{
			if (v[j] > v[j + 1])
			{
				int temp = v[j];
				v[j] = v[ + 1];
				v[j + 1] = temp;
			}
		}
	}
	//calling function "medij"
	medij(v, N);
	return 0;
}