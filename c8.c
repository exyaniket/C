//Write a program to check if a number is prime using a loop.
#include <stdio.h>
int main (){
int n;

printf ("enter a num : ");
scanf("%d",&n);

if (n%2==0 && n/2>1 || n%3==0 && n/3>1|| n%5==0 && n/5>1)
{
    printf("%d is not a prime no",n);
}
else {
    printf("%d is a prime no",n);
}

}