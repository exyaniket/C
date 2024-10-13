//Quarters month printer
#include <stdio.h>

int main() {
    int q;

    printf("Enter quarter number (1-4): ");
    scanf("%d", &q);

    switch (q) {
       
        case 1:
            printf("jan-mar\n");
            break;

            case 2:
            printf("apr-jun\n");
            break;
            case 3:
            printf("jul-sept\n");
            break;

            case 4:
            printf("oct-dec\n");
            break;
        default:
            printf("Error: Invalid number.\n");
            break;
    }

   
}
