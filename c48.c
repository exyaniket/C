//voting system
#include <stdio.h>

int main() {
    int votesA = 0, votesB = 0, choice;

    do {
        printf("Vote for your candidate:\n");
        printf("1. Candidate A\n");
        printf("2. Candidate B\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                votesA++;
                printf("You voted for Candidate A.\n");
                break;
            case 2:
                votesB++;
                printf("You voted for Candidate B.\n");
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    printf("Total votes for Candidate A: %d\n", votesA);
    printf("Total votes for Candidate B: %d\n", votesB);

    
}
