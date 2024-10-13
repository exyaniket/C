/*
1
10
101
1010
*/
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Outer loop for number of rows
    for (i = 1; i <= n; i++) {
        // Inner loop for each column in the row
        for (j = 1; j <= i; j++) {
            // Print 1 when j is odd, 0 when j is even
            printf("%d", j % 2); // This will print 1 for odd j and 0 for even j
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
