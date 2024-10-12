#include<stdio.h>
int main () {

int n,avg,sum;


printf("enter no of input : ");
scanf("%d",&n);
int num[n];
for(int i=0;i<n;i++){
printf("enter no : \n");
scanf("%d",&num[i]);
}

for (int i=0;i<n;i++)
{
    sum=sum+num[i];

}
avg=sum/n;

printf("average is : %d",avg);
}