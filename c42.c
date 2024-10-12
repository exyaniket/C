//Sum of all odd numbers between 1 to 100
#include<stdio.h>
int main (){

int i,sum=0;

for (i=1;i<=100;i=i+2)
{
    sum=sum+i;

}

printf("Sum is : %d",sum);



}