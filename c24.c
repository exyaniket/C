//Tempertaure conversion
#include<stdio.h>
int main (){
float c,f,temp;
int n;

printf("choose conversion : \n");
printf("1- C :>> F\n");
printf("2- F :>> C\n");
scanf("%d",&n);
printf("enter temperature : ");
scanf("%f",&temp);



switch (n)
{
case 1:
    f=((9.0/5.0)*temp)+32;
    printf("%.2f",f);
    break;


    case 2:
    c=(temp-32)*(5.0/9.0);
    printf("%.2f",c);

    break;

default:
printf("invalid data provided");
    break;
}




}