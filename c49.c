//pattern printing
/*
  1
 323
43234
*/

#include <stdio.h>

int main() {
    int rows = 3; // Number of rows for the pattern

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = i; j < rows; j++) {
            printf(" ");
        }

        // Print descending numbers
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }

        // Print ascending numbers
        for (int j = 2; j <= i; j++) {
            printf("%d", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
