/*
1
00
111
0000
*/


#include <stdio.h>

int main()

{
    int n, i, k,j;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=2*i-1;j++)
        {
            printf("1");
            
        }
printf("\n");
        for(k=1;k<=2*i;k++)
         {
           printf("0");
         }
printf("\n");
    }
}






