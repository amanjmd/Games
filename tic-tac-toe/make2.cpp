#include <iostream>
#include "tic-tac-toe.h"
using namespace std;
void make2()
{
    int i;
    for(i=1; i<9 ; i=i+2)
    {
        if(input_array[i]==2)
        {
            input_array[i]=comp_sign;
            print_game();
            break;
        }
    }
}
