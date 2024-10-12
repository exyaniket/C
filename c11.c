//Write a program to print all prime numbers between 1 and 100.
#include<stdio.h>
int main () {

int n,i;
for (i=2;i<=100;i++)
{ 
    if (i%2 != 0  && i%3 != 0 && i%5 != 0 && i%7 !=0)
    {   
        printf("%d is prime \n",i);
        
    }
    if (i%2==0 && i/2==1||i%3==0 && i/3==1||i%5==0 && i/5==1 || i%7==0 && i/7==1){
    printf("%d is prime \n",i);}
}

}