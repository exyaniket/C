//Write a program to find sum of the first n terms of the arithmetic series.
#include <stdio.h>
int main  () {

 float a,d,sn;
 int n;

    printf("enter a : \n");
    scanf("%f",&a);
    printf("enter d : \n");
    scanf("%f",&d);
    printf("enter n : \n");
    scanf("%d",&n);
printf("sum of %d terms : \n",n);
 sn=(n/2)*(2*a+(n-1)*d);
        printf("%f \n",sn);


}