//bank menu selection
#include <stdio.h>
int main (){
int i,acc;
printf("enter account no : ");
scanf("%d",&acc);
printf("S.No.   options\n");
printf("1   check balance\n");
printf("2   send money\n");
printf("3   see transactions\n");
scanf("%d",&i);

switch (i)
{
case 1:
    printf("your acc %d have $0 ",acc);
    break;

    case 2:
    printf("your broke! :(");
    break;

    case 3:
    printf("NO past transactions");
    break;



default: {
    printf("broke guys bank");
    break;
}
}


}