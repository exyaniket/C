//Write a program to find the GCD of two numbers using a loop.
#include <stdio.h>
int main (){
int n,a,b,i,gcd;

printf ("enter first num : ");
scanf("%d",&a);
printf ("enter second num : ");
scanf("%d",&b);

for (i=1;i<=a && i<=b ;i++)
{
    if (a%i==0 && b%i==0)
    {
        gcd =i;
        
    }
} 
printf("GCD is %d",gcd);

}


