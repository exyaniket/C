//Write a program to find sum of the first n terms of the geometric series.
    #include <stdio.h>
    #include <math.h>
    int main (){

    float a,r,sn;
    int n;

    printf("enter a : \n");
    scanf("%f",&a);
    printf("enter r : \n");
    scanf("%f",&r);
    printf("enter n : \n");
    scanf("%d",&n);

    printf("sum of first %d terms of this G.P. : \n",n);
    
    sn = a * (pow(r, n) - 1) / (r - 1);
    printf("%.2f",sn);
    
    
    }