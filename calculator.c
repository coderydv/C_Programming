#include<stdio.h> 
#include<math.h>
#include<string.h>
#include<stdlib.h>

// A simple calculator which takes values and opertor from user.

int main(){
float value1,value2,answer;
char operator;
printf("Enter the values for function i.e value  operator value :  ");
scanf ("%f %c %f",&value1,&operator,&value2);

switch (operator)
{
case '+':
    answer= value1+value2;
    break;
case '-':
    answer= value1-value2;
    break;
case '/':
    answer= value1/value2;
    break;
case '*':
    answer= value1*value2;
    break;
case '^':
    answer= pow(value1,value2);
    break;
default:
printf(" enter a valid value of operator or values");
    break;
}
printf(" Answer of %f  %c %f is =  %f",value1,operator, value2, answer); // result produced by calculator
// printf(" The  result is : %f", answer);
return 0;
}