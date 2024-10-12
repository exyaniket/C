// sum of first natural no
#include <stdio.h>
int   main () {

int n,sum=0;
printf("enter a num : ");
scanf("%d",&n);

for (int i=1;i<=n;i++)
{
    sum=sum+i;
}

printf("%d",sum);



}