//decimal to binary
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n;
    
    printf("enter decimal : ");
    scanf("%d",&n);//5=101
    int copy_n=n;
    int bits = log2(n)+1;
   int *ptr=(int *)calloc(bits,sizeof(int));
   int i=0;
   while(copy_n>0){    
        ptr[i]=copy_n%2;

        copy_n/=2;

        i++;
    }
    
    
   
for(int i=bits-1;i>=0;i--){
    printf("%d",ptr[i]);
}

 free(ptr);


}