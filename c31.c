#include <stdio.h>
#include <math.h>
int main () {

int a,n,f,l,count=0,m;
printf("enetr a number  "); //5489
scanf("%d",&n);

l=n%10;//9

while (n>9)
{
    f=n/10;//5
    n/=10;
    count++;
}
n=n/10;//548
int b=n/pow(10,count-1);
/*do
{
    a=n/(pow(10,count));


}*/




// printf("FIRST DIGIT IS : %d\n ",f);
// printf("LAST DIGIT IS : %d ",l);


}


