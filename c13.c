    //Write a program to generate the first n terms of the arithmetic series.
    #include <stdio.h>
    int main (){

    int a,d,n,an;

    printf("enter a : \n");
    scanf("%d",&a);
    printf("enter d : \n");
    scanf("%d",&d);
    printf("enter n : \n");
    scanf("%d",&n);

printf("first %d terms of this A.P. : \n",n);
    for (int i=1;i<=n;i++)
    {
        an=a+(i-1)*d;
        printf("%d \n",an);
    }


    }