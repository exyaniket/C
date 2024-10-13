//pattern printing 
/*
1   1 
 2 2 
  3
 2 2
1    1
*/
#include <stdio.h>

int main() {
    int n;

    // Get the number of rows from the user
    printf("Enter the number of rows (n): ");
    scanf("%d", &n);

    // Print the upper part of the pattern
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        // Print the current number
        printf("%d", i);
        // Print spaces between numbers
        if (i != n) {
            for (int j = 1; j <= n - i; j++) {
                printf(" ");
            }
            printf("%d", i);
        }
        printf("\n");
    }

    // Print the lower part of the pattern
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        // Print the current number
        printf("%d", i);
        // Print spaces between numbers
        if (i != n) {
            for (int j = 1; j <= n - i; j++) {
                printf(" ");
            }
            printf("%d", i);
        }       
        printf("\n");
    }

    return 0;
}

