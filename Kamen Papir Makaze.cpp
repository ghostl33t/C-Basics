#include <iostream>
using namespace std;
int main()
{
    int NPapir,NKamen,NMakaze;
    int LPapir,LKamen,LMakaze;
    int rezultat = 0;
    int brojac = 0;

    cin>>NPapir>>NKamen>>NMakaze;
    cin>>LPapir>>LKamen>>LMakaze;

    while(NKamen > 0 && LPapir > 0){
        if(NKamen - 2 < 0 || LPapir - 1 < 0)
            break;
        NKamen = NKamen - 2;
        LPapir = LPapir - 1;
        brojac += 2;
    }
    while(NPapir > 0 && LMakaze > 0){
        if(NPapir - 2 < 0 || LMakaze - 1 < 0)
                break;
        NPapir = NPapir - 2;
        LMakaze = LMakaze - 1;
        brojac += 2;
    }
    while(NMakaze > 0 && LKamen > 0){
        if(NMakaze - 2 < 0 || LKamen - 1 < 0)
            break;
        NMakaze = NMakaze - 2;
        LKamen = LKamen - 1;
        brojac += 2;
    }

    while(NKamen > 0 && LKamen > 0){
        if(NKamen - 1 < 0 || LKamen - 1 < 0)
            break;
        NKamen = NKamen - 1;
        LKamen = LKamen - 1;
        brojac++;
    }
    while(NPapir > 0 && LPapir > 0){
        if(NPapir - 1 < 0 || LPapir - 1 < 0)
            break;
        NPapir = NPapir - 1;
        LPapir = LPapir - 1;
        brojac++;
    }
    while(NMakaze > 0 && LMakaze > 0){
        if(NMakaze - 1 < 0 || LMakaze - 1 < 0)
            break;
        NMakaze = NMakaze - 1;
        LMakaze = LMakaze - 1;
        brojac++;
    }

    while(NKamen > 0 && LMakaze > 0){
        if(NKamen - 1 < 0 || LMakaze - 2 < 0)
            break;
        NKamen = NKamen - 1;
        LMakaze = LMakaze - 2;
        brojac++;
    }
    while(NPapir > 0 && LKamen > 0){
        if(NPapir - 1 < 0 || LKamen - 2 < 0)
            break;
        NPapir = NPapir - 1;
        LKamen = LKamen - 2;
        brojac++;
    }
    while(NMakaze > 0 && LPapir > 0){
        if(NMakaze - 1 < 0 || LPapir - 2 < 0)
            break;
        NMakaze = NMakaze - 1;
        LPapir = LPapir - 2;
        brojac++;
    }
    cout<<"Nikola Papir: " << NPapir<<endl;
    cout<<"Nikola Kamen: " << NKamen << endl;
    cout<<"Nikola Makaze: " << NMakaze << endl;

    cout<<"Luka Papir: " << LPapir<<endl;
    cout<<"Luka Kamen: " << LKamen << endl;
    cout<<"Luka Makaze: " << LMakaze << endl;

    cout<<endl<<"ISPIS: " << brojac;
    return 0;
}
