/*   1
  21 
 321
4321
*/
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print leading spaces (directly use n - i)
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Print the numbers in decreasing order from i to 1
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
        
        printf("\n");
    }

    return 0;
}
