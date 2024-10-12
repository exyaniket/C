//GRADE
#include <stdio.h>
int main (){
    int marks;
    printf("enter marks : ");
    scanf("%d",&marks);

    if (marks>80&&marks<=100)
    {
        printf("GRADE A");
    }

    else if (marks>50&&marks<=80)
    {
        printf("GRADE B");
    }

    else  if (marks>30&&marks<=50)
    {
        printf("GRADE F");

    }

    else {
        printf("invalid marks !!");
    }




}