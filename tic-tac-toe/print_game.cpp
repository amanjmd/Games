#include<iostream>
#include "tic-tac-toe.h"
using namespace std;
void print_game()
{
    int i,j;
    for(i=0;i<7;i=i+3)
    {
        for(j=0;j<3;j++)
        {
        if(input_array[i+j]==2)
        cout << '*'<<'\t';
        if(input_array[i+j]==3)
        cout << 'O'<<'\t';
        if(input_array[i+j]==5)
        cout << 'X'<<'\t';
        //cout << input_array[i+j];
;        }
    cout << endl;
    }
}
