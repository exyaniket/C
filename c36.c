//simple interest calculator
#include<stdio.h>
int main (){

int p,t;
float i,ia;

printf("enter principal amount : ");
scanf("%d",&p);

printf("enter rate of interest : ");
scanf("%f",&i);

printf("enter time (in years) : ");
scanf("%d",&t);

ia=(p*i*t)/100;
printf("your interest is : %.2f\n",ia);
printf("your total loan is : %.2f",ia+p);



}