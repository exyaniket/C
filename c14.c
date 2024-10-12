//Write a program to generate the first n terms of the geometric series.
    #include <stdio.h>
    #include <math.h>
    int main (){

    int a,r,n,an;

    printf("enter a : \n");
    scanf("%d",&a);
    printf("enter r : \n");
    scanf("%d",&r);
    printf("enter n : \n");
    scanf("%d",&n);

    printf("first %d terms of this G.P. : \n",n);
    for (int i=1;i<=n;i++)
    {
        an=a*pow(r,i-1);
        printf("%d \n",an);
    }
    
    
    
    }