#include <iostream>
/*fibonacci series */
//text of exam: http://hsin.hr/skolsko2009/pasccpp1_zadaci.pdf, exam num: 2 (NIZOVI)!
/* TEST INPUT */
/*
IN:
2 1 
1 2 
OUT: 
3
6 
9 

IN: 5 2 
7 5
OUT:
7 
12
19 
*/
using namespace std;
void Inicijalizacija_Nizova(int niz[100],int &A,int &B) //Initialization of arrays (Marko and Darko)
{
    // i begining is from 2 and end is on 99, reason why i begin with index 2 is described from 31 to 34 lines of code.
    for(int i = 2; i < 100; i++)
    {
        if(i % 2 == 0)
        {
            niz[i] = niz[i - 1] + A;
        }
        else if(i % 2 != 0)
        {
            niz[i] = niz[i-1] + B;
        }
    }
}
int main()
{
    int A,B,C,D; //Input varibles
    int Marko[100]; // Marko Array
    int Darko[100]; // Darko Array
    int najmanja_tri_broja[3]; //Lowest three numbers similar in Marko and Darko arrays
    int brojac_tri_broja = 0; // This variable is count of "najmanja_tri_broja[3]
    int privremeni_Marko = 0; //taking element in for loop from Marko Array
    int privremeni_Darko = 0; //taking element in for loop from Darko Array
    cin>>A>>B; //input first and second number in Marko's Array 
    cin>>C>>D; ////input first and second number in Darko's Array 
    Marko[0] = A; // Always first element is A
    Marko[1] = A + B; //Always second element is A + B
    Darko[0] = C; //Always first element is C
    Darko[1] = C + D; //Always second element is D
    Inicijalizacija_Nizova(Marko,A,B); //Calling initialization function for Marko Array
    Inicijalizacija_Nizova(Darko,C,D);//Calling initialization function for Darko Array
    for(int i = 0; i < 3;i++) //Setting lowest three numbers to zero
    {
        najmanja_tri_broja[i] = 0;
    }
    for(int i = 0; i < 100; i++)
    {
        privremeni_Marko = Marko[i]; 
        privremeni_Darko = Darko[i];
        for(int j = 0; j < 100; j++)
        {
            //Checking if lowest number from Marko's array is equal to lowest number Darko's array
            if(privremeni_Marko == Darko[j] && privremeni_Marko <= privremeni_Darko)
            {
                //if this is true, then put in "najmanja_tri_broja[brojac_tri_broja]" value equal to privremeni_Marko
                najmanja_tri_broja[brojac_tri_broja] = privremeni_Marko;
                brojac_tri_broja++; //move for +1 brojac_tri_broja
                i++; //then give value i + 1 
            }
            //Same thing just i use privremeni_Darko....
            if(privremeni_Darko == Marko[j] && privremeni_Darko < privremeni_Marko)
            {
                najmanja_tri_broja[brojac_tri_broja] = privremeni_Darko;
                brojac_tri_broja++;
                i++;
            }
        }
    }
    //cout on screen lowest three numbers: 
    for(int i = 0; i < 3; i++)
    {
        cout<< najmanja_tri_broja[i]<<endl;
    }
    return 0;
}
