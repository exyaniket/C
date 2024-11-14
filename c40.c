//no of even odd digit in a given num
#include<stdio.h>
int main(){

int n,even=0,odd=0;

printf("enter a num : ");
scanf("%d",&n);

while (n>0)
{
    if(n%2==0)
    {
        even++;
    }
    else {
        odd++;
    }
    n=n/10;
}

printf("no of even digits : %d\n",even);
printf("no of odd digits : %d\n",odd);


}