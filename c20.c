//simple calculator
#include <stdio.h>
void main (){

float a,b;
char c;

printf("enter a num : ");
scanf("%f",&a);
printf("enter a num : ");
scanf("%f",&b);

printf("enter operator : ");
scanf(" %c",&c);

switch (c)
{
case '+':
    printf("%.2f",a+b);
    break;

case '-':
    printf("%.2f",a-b);
    break;

case '*':
    printf("%.2f",a*b);
    break;


case '/':
    printf("%.2f",a/b);
    break;

default:{
    printf("invalid operator");
    }
    break;
}





}