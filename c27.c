/*
1
12
123
1234
*/
#include <stdio.h>

int main()

{
    int n, i, k,j;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d",j);
            
        }
printf("\n");
    }
}