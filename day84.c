#include <stdio.h>

// Define enumeration for status
enum Status {
    SUCCESS, // 0
    FAILURE, // 1
    TIMEOUT  // 2
};

int main() {
    enum Status s;

    // Ask user to enter a status value
    printf("Enter status (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
    scanf("%d", &s);

    // Print message based on status
    switch (s) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Invalid status value!\n");
    }

    return 0;
}
