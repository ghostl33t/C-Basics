#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string test[100][1];
    int N;
    cin>>N;
     string rijec;
     int broj_papirica;
     int papirici;
     string recenica;
     string trazena_fraza;
     string pomocni;
     int brojac = 0;
     for(int x = 0; x < N; x++)
     {
           cin>>rijec>>broj_papirica;
           for(int y = 0; y < broj_papirica; y++)
           {
                 cin>>papirici;
                 for(int i = 0; i < 100; i++)
                     {
                          for(int j = 0; j < 1; j++)
                          {
                                if(i == papirici)
                                {
                                      test[i][j] +=rijec + " ";
                                }
                          }
                     }
           }
    }
    cin.ignore();
    getline(cin,trazena_fraza);
    for(int i = 0; i < 100; i++)
    {
         for(int j = 0; j < 1; j++)
         {
             recenica +=test[i][j];
         }
    }
    int g = 0;
    for(int i = 0; i < recenica.length();i++)
    {
          int privremeni_i = i;


          while(recenica[privremeni_i] == trazena_fraza[g])
          {
              g++;
              pomocni += recenica[privremeni_i];
              privremeni_i++;
              if(pomocni == trazena_fraza)
              {
              brojac++;
              g = 0;
              }
          }
          if(recenica[i] != trazena_fraza[g])
          {
              g = 0;
              pomocni ="";
          }

  }
  cout<<brojac;
  return 0;
  }
