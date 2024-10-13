//sum of series 1/1 + 1/2 + 1/3 ....+ 1/n
#include <stdio.h>
int main(){

int i,n;
float sum=0;

printf("enter n terms : ");
scanf("%d",&n);

for (i=1;i<=n;i++)
{
    sum = sum+(1.0/i);

}

printf("%f",sum);




}