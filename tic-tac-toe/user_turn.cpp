#include <iostream>
#include "tic-tac-toe.h"
using namespace std;
void user_turn()
{
turn++;
int place;

if(turn<10)
{
    cout << "enter the place to move\n";
again:cin >> place;
if(input_array[place]==2)
{
    if(place==posswin(user_sign)&&(turn<=9))
    {
    go_user(place);
   system("cls");
    print_game();
    cout<<"user wins";
    system("exit") ;
    }
    else if(turn<=9)
    {
        go_user(place);
        //system("cls");
        print_game();
        comp_turn();
    }

}
else
{
    cout <<"mover not permmitted\nenter again";
    goto again;
}
}
else
    {
        cout <<"game draw";
        system("exit");
    }


}
