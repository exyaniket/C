/*
1
12
123
12
1
*/



#include <stdio.h>
int main()
{
    int n, i, k,j;
    printf("Enter a number: ");
    scanf("%d", &n);
 for (i=1; i <= n; i++)
 {
    for (j = 1; j <= 2*i-1; j++)
    {
        printf("%d",j);
    
    }        
printf("\n");    
}
for (i=n; i >=1; i--)
 {
for (j = 1; j <=2*(i-1)-1 ; j++)
    {
        printf("%d",j);  
    }
printf("\n");
}
}
