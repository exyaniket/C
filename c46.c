//Traffic light
#include <stdio.h>

int main() {
    char light;

    printf("Enter traffic light color (R/G/Y): ");
    scanf(" %c", &light);

    switch (light) {
        case 'R':
            printf("Stop\n");
            break;
        case 'G':
            printf("Go\n");
            break;
        case 'Y':
            printf("Caution\n");
            break;
        default:
            printf("Error: Invalid light color.\n");
            break;
    }

    
}
