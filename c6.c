/*
1sq + 2sq + 3sq .....upto nterms
*/


#include<stdio.h>
int main () {

int n,sum=0;
printf("enter num : ");
scanf("%d",&n);

for(int i=1;i<=n;i++){
    sum=sum+(i*i);

}
printf("%d",sum);

}