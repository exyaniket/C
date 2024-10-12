//compund interest calculator
#include <stdio.h>
#include <math.h>
int main(){

int p,n,t;
float r,ci,amount;

printf("enter principal amount : ");
scanf("%d",&p);


printf("enter rate of interest : ");
scanf("%f",&r);

printf("enter time (in years) : ");
scanf("%d",&t);

printf("enter frequency of ci calculation : ");
scanf("%d",&n);

amount = p * pow((1 + r / (n * 100)), n * t);
    ci = amount - p;
printf("your interest is : %.2f\n",ci);
printf("your total loan is : %.2f",amount);

}