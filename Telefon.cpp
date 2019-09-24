#include <iostream>
#include <string>
using namespace std;
int main(){
string znakovi;
    string brojevi;
    cin>>znakovi;
    cin>>brojevi;
    for(int i = 0; i < 20;i++)
    {
        if(znakovi[i] == '-')
        {
            brojevi.insert(i," ");
        }
    }
    for(int i = 0; i < 20; i++)
    {
        if(isspace(brojevi[i]))
        {
            brojevi[i] = '-';
        }
    }
    cout<<brojevi;
    return 0;
}
