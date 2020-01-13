#include <iostream>
/*TEKST(Z BR1): https://hsin.hr/skolska2007/zadaci/pas_c_cpp/prva/zadaci.pdf */
using namespace std;

int main()
{
    string x;
    string brojevi;
    int temp_b = 0;
    cin>>x;
    cin>>brojevi;
    for(int i = 0; i < x.length(); i++)
    {
        if(x[i] == 'x')
        {
            x[i] = brojevi[temp_b];
            temp_b++;
        }
    }
    cout<<x;
    return 0;
}
