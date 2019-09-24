#include <iostream>

using namespace std;

int main()
{
    int Redovi,Stupci;
    cin>>Redovi>>Stupci;
    int Polja[Redovi][Stupci];
    int Bombe[Redovi][Stupci];
    for(int i = 0; i < Redovi; i++)
    {
        for(int j = 0; j < Stupci; j++)
        {
            Bombe[i][j] = 0;
        }
    }
    for(int i = 0; i < Redovi; i++)
    {
        for(int j = 0; j < Stupci; j++)
        {
            cin>>Polja[i][j];
        }
    }
    for(int i = 0; i < Redovi; i++)
    {
        for(int j = 0; j < Stupci; j++)
        {
           if(i == 0 && j == 0)
           {
               Bombe[i][j] += Polja[i][j+1] + Polja[i + 1][j + 1] + Polja[i + 1][j];
           }
           if(i == 0 && j != 0 && j != Stupci - 1 && j != 0)
           {
               Bombe[i][j] += Polja[i][j-1] + Polja[i][j + 1] + Polja[i+1][j] + Polja[i+1][j-1] + Polja[i+1][j+1];

           }
           if(i == 0 && j == Stupci - 1)
           {
               Bombe[i][j] += Polja[i][j-1] + Polja[i+1][j] + Polja[i+1][j-1];
           }
           if(i == Redovi - 1 && j == 0)
           {
               Bombe[i][j] += Polja[i][j+1] + Polja[i-1][j] + Polja[i-1][j+1];
           }
           if(i == Redovi - 1 && j != Stupci - 1 && j != 0)
           {
               Bombe[i][j] += Polja[i][j-1] + Polja[i][j+1] + Polja[i - 1][j] + Polja[i - 1][j + 1] + Polja[i - 1][j - 1];
           }
           if(j == Stupci - 1 && i == Redovi - 1)
           {
               Bombe[i][j] += Polja[i][j-1] + Polja[i - 1][j] + Polja[i-1][j-1];
           }
           if(j == 0 && i != 0 && i != Redovi - 1)
           {
               Bombe[i][j] += Polja[i][j+1] + Polja[i + 1][j] + Polja[i+1][j+1] + Polja[i - 1][j] + Polja[i-1][j+1];
           }
           if(j == Stupci - 1 && i != 0 && i != Redovi - 1)
           {
               Bombe[i][j] += Polja[i][j-1] + Polja[i + 1][j] + Polja[i + 1][j - 1] + Polja[i - 1][j] + Polja[i - 1][j - 1];
           }
           else if(i != 0 && j != 0 && j != Stupci - 1 && i != Redovi - 1)
            Bombe[i][j] += Polja[i][j+1] + Polja[i][j-1] + Polja[i-1][j] + Polja[i - 1][j-1] + Polja[i-1][j+1] + Polja[i + 1][j+1] + Polja[i + 1][j-1] + Polja[i+1][j];

        }
    }
    for(int i = 0; i < Redovi; i++)
    {
        for(int j = 0; j < Stupci; j++)
        {
            cout<<Bombe[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
