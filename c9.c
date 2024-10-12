//Write a program to count the number of digits in a number using a loop.
#include <stdio.h>
int main (){
int n,count=0;

printf ("enter a num : ");
scanf("%d",&n);

while (n!=0)
{
    n=n/10;
    count++;
}

printf("no of digits : %d",count);

}