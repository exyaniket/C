//Write a program to find the factorial of a number using a while loop.
#include <stdio.h>
int main () {
    int n,i=1,fact=1;

printf("enter a num : ");
scanf("%d",&n);

while (i<=n)
{
    fact = fact*i;
    i++;

}
printf("%d",fact);
return 0;


}