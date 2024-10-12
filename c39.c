//first and last digit of a num
#include <stdio.h>
int main (){

int n,l,f;
printf("enter a num : ");
scanf("%d",&n);

l=n%10;

while(n>0){
    f=n;
    n=n/10;
}

printf("first digit is : %d\n",f);
printf("last digit is : %d",l);




}