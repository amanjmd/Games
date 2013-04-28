#include<iostream>
#include<stdlib.h>
#include "tic-tac-toe.h"
using namespace std;
void comp_turn()
{
  system("cls");
//cout<<++turn<<endl;
++turn;
switch (turn)
{
	case 1: //turn X
go_comp(0);
break;

case 2: //O
if(input_array[4]==2)
go_comp(4);
else
go_comp(0);
break;

case 3: //X
if(input_array[8]==2)
go_comp(8);
else
go_comp(2);
break;

case 4: //O
if(posswin(user_sign)!=9) //X can possible win in next move
go_comp(posswin(user_sign)); //block x's win
else
make2();
break;

case 5: //X
if(posswin(comp_sign)!=9) //is my win possible in this move
{
    cout << posswin(comp_sign)<<endl;
go_comp(posswin(comp_sign)); // X wins
cout<<"\n\nComputer wins";
return;
}
else if(posswin(user_sign)!=9) //is opponent winning in next move?
go_comp(posswin(user_sign)); //block opponent's win
else if(input_array[6]==2)
go_comp(6);
else
go_comp(2);

break;

case 6: //O
if(posswin(comp_sign)!=9)
                      {
go_comp(posswin(comp_sign)); //O wins
cout<<"\n\nComputer wins";
return;
                      }
else if(posswin(user_sign)!=9)
go_comp(posswin(user_sign));
else if((input_array[1]==2)||(input_array[3]==2)||(input_array[5]==2)||(input_array[7]==2))
make2();
else
anywhere();

break;

case 8:
if(posswin(comp_sign)!=9)
{
go_comp(posswin(comp_sign)); //O wins
cout<<"\n\nComputer wins";
return;
}
else if(posswin(user_sign)!=9)
go_comp(posswin(user_sign));
else
anywhere();

break;

default: //case 7 and 9
//cout<<posswin(comp_sign);
if(posswin(comp_sign)!=9) //is my win possible in this move
  {
     // cout<<posswin(comp_sign);
go_comp(posswin(comp_sign)); // X wins
cout<<"\n\nComputer wins";
return;
  }
else if(posswin(user_sign)!=9) //is opponent winning in next move?
go_comp(posswin(user_sign)); //block opponent's win
else
anywhere();

break;
     }

if(turn==10)
 {
cout<<"\nDraw";
return;
 }
else
{

user_turn();
}


}




