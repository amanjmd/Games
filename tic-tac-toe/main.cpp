#include <iostream>
#include "tic-tac-toe.h"

using namespace std;
int input_array[9],user_sign,comp_sign;
char choice;
int turn=0;
int main()
{
    int i;
    char end;
    for(i=0;i<9;i++)
    {
        input_array[i]=2;
    }
    print_game();
    cout << "who plays first\nEnter\nC for computer\nU for user\n";
    cin>>choice;
    if((choice =='u')||(choice == 'U'))
    {
        choice='u';
        user_sign=3;
        comp_sign=5;
        user_turn();
    }
    else
    {
        choice='c';
        user_sign=5;
        comp_sign=3;
       comp_turn();
       system("exit");
    }
    //cin >>end;
    return 0;
}
