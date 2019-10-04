#include <iostream>
/*TEXT OF EXERCISE: https://petlja.org/biblioteka/r/problemi/Zbirka/turnir */
using namespace std;

int main()
{
    int N;
    int p, q, r, s;
    cin>>N;
    int timovi[N][2];
    int rezultati[N][2];
    for(int x = 0; x < N; x++)
    {
        cin>>p >> q >> r >> s;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                timovi[i][0] = p; timovi[i][1] = q;
                rezultati[i][0] = r; rezultati[i][1] = s;
            }
        }
    }
    for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                cout<<timovi[i][0] << " " << timovi[i][1] << " " << rezultati[i][0] << " " << rezultati[i][1];
            }
            cout<<endl;
        }
    return 0;
}
