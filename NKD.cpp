#include <iostream>
/* Link of exercise: http://hsin.hr/skolsko2009/pasccpp1_zadaci.pdf
Exercise Number: 1
Name: "NKD"
---------------------------
TEST IN: 1
4
3
a
b
c
OUT:
c
b
a
----------------------------
TEST IN: 2
4
4
a
b
c
b
OUT:
b
c
a
----------------------------
TEST IN: 3
2
6
buba
koko
buba
ivan
ivan
koko
OUT:
koko
ivan
-----------------------------
*/
using namespace std;

int main()
{
    int k, n; // k is capacity of the list, n is number of opened documentation
    int temp_j = k - 1; // use temp_j variable for moving strings down in array
    string output[10][1]; // output array string (MAX documents in the list is 10,
    string input; //use this string for input
    int count0 = 0; //count variable
    /* initialization of array string "output" */
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 1; j++)
        {
            output[i][j] = " ";
        }
    }
    /*input of k, n and documentation name*/
    cin>>k>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>input;
        count0 = 0;
        /* we use this do while loop for counting number of documents with diffrent name */
        do{
            count0++;
        }while(count0 < k - 1 || output[count0][0] == input);
        // use temp_j variable for moving elements down
        do{
            output[temp_j + 1][0] = output[temp_j][0];
            temp_j--;
        }while(temp_j >= 0);
        //then set output[0][0] equal to the input
        output[0][0] = input;
        //if we have more documents with similar name, then move that element on the top of the list
        //and remove element from the other places in string array
        for(int x = 0; x < k; x++)
        {
            for(int y = 0; y < k; y++)
            {
                if(x != y)
                {
                    if(output[x][0] == output[y][0])
                    {
                        output[y][0] = " ";
                    }
                }
            }
        }
    }
    //I remove elements by using " ", so in cout i don't need to print string if is string equal to " "
    for(int i = 0; i < k; i++)
    {
        if(output[i][0] != " ")
            cout<<output[i][0]<<endl;
    }
    return 0;
}
