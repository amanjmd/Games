#include<iostream>
#include<stdlib.h>
#include "tic-tac-toe.h"
using namespace std;
int posswin(int p)
{
int product,k=0,empty=9,temp,i,j;

if(p==3) //possible win for X
product=18;

else
product=50;

for(i=0;i<=7;i=i+3) //row check
     {
for(j=0;j<3;j++)
{
    if(input_array[i]*input_array[i+1]*input_array[i+2]==product)
                        {
                        if(input_array[i+j]==2)
                        empty=i+j;
                        }

}
     }

if(empty != 9) //possible win in a row found
return empty;

else
     {
for(i=0;i<3;i++) //column check
         {
             for(j=0;j<9;j=j+3)
             {
                 if(input_array[i]*input_array[i+3]*input_array[i+6]==product)
                          {
                            if(input_array[i+j]==2)
                            empty=i+j;
                          }
             }
         }
     }

if(empty!=9) //possible win in a column found
return empty;

else
         {
if(input_array[2]*input_array[4]*input_array[6]==product) //check the 1st diagnol
for(i=2;i<7;i=i+2)
if(input_array[i]==2)
empty=i;
}
if(empty!=9) //possible win in a column found
return empty;
else if(input_array[0]*input_array[4]*input_array[8]==product) //check the 2nd diagnol
{
for(i=0;i<9;i=i+4)
if(input_array[i]==2)
empty=i;
}
if(empty!=9) //possible win in a column found
return empty;
else
return 9;

}

