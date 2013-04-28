#include<iostream>
#include "tic-tac-toe.h"
using namespace std;
void anywhere()
{
    int i ;
    for(i=0;i<9;i++)
    {
        if(input_array[i]==2)
        {
            go_comp(i);
            break;
        }
    }
}
