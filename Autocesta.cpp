#include <iostream>

using namespace std;

int main()
{
    int A; //Oznaka Ivicinog pocetnog mjesta
    cin>>A;
    // Tacka na kojoj se split nalazi je 375, dok je tacka grada Zagreba 0
    // Ukoliko je Ivica blizi gradu Splitu, zavrsit ce u Zagrebu, inace zavrsit ce u Splitu.
    // Ispisuje se udaljenost ivice od grada u koji ide i ime grada u kojem ce zavrsiti
    if(375 - A > 375 / 2)
    {
        cout<<375 - A<<endl;
        cout <<"SPLIT";
    }
    else
    {
        cout<<375 - A<<endl;
        cout<<"ZAGREB";
    }
    return 0;
}
