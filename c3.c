//Write a program to calculate the sum of the first 50 natural numbers using a do-while loop.
#include <stdio.h>
int main (){

int i=1,sum=0;

do{
    sum=sum+i;
    i++;
}
while (i<=50);
printf("sum is : %d",sum);
}