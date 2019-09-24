#include <iostream>

using namespace std;

int main()
{
    int n;
    int trenutni_zbir,broj_grupa = 0;
    cin>>n;
    int niz[n];
    int i = 0;
    int j = 0;
    for(i = 0; i < n; i++)
    {
        cin>>niz[i];
    }
        /*BROJANJE ELEMENATA SA 2 GRUPE!!*/
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(i != j)
                {
                    trenutni_zbir = niz[i] + niz[j];
                    if(trenutni_zbir % 3 == 0)
                    {
                        broj_grupa++;
                        /* TESTIRANJE */
                        //cout << broj_grupa <<" " << i <<" "<<  j <<" " << trenutni_zbir << endl;
                    }
                }
                trenutni_zbir = 0;
            }
        }
        /*BROJANJE ELEMENATA SA 3 GRUPE!!*/
        for(i = 0; i < j; i++)
        {
            trenutni_zbir = 0;
            for(j = 0; j < n; j++)
            {
                if(i != j)
                {
                    int vel = 1;
                    do{
                        trenutni_zbir = niz[i] + niz[j] + niz[j + vel];
                        if(trenutni_zbir % 3 == 0)
                        {
                            broj_grupa++;
                            /* TESTIRANJE  */
                            //cout<< broj_grupa << " " << i << " " << j << " " << j + vel << " " << trenutni_zbir <<endl;
                        }
                        vel++;
                        trenutni_zbir = 0;
                    }while(vel + 1 == n);
                }
            }
        }
         broj_grupa = broj_grupa / 2;
    cout<<broj_grupa;
    return 0;
}
