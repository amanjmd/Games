#include<iostream>
#include "tic-tac-toe.h"
#include <stdlib.h>
using namespace std;
void go_comp(int place)
{
 input_array[place]=comp_sign;
print_game();
}
void go_user(int place)
{
    input_array[place]=user_sign;

}
