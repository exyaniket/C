//greatest of three nos
#include<stdio.h>
int main ( ){
int a,b,c;
printf("enter a : ");
scanf("%d",&a);

printf("enter b : ");
scanf("%d",&b);

printf("enter c : ");
scanf("%d",&c);

if (a>b && b>c){
    printf("%d is greatest",a);
}
else if (b>c&&b>a){
    printf("%d is greatest",b);
}
else if (c>b && c>a){
    printf("%d is greatest",c);
}
else if (a==b && a==c){
    printf("all are equal");
}
else {
    printf("invalid data");
}

}