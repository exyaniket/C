//Write a program to print the Fibonacci series up to n terms using a for loop. 0,1,1,2,3,5,8,13
#include <stdio.h>
int main (){

int n,i,sum=0,k,sum1=1;

printf("enter a num : ");
scanf("%d",&n);

for (i=1;i<=n;i++){
   
        printf("%d\n",sum);
        sum=sum+sum1;
        printf("%d\n",sum1);
        sum1=sum1+sum;
        
    

}


}