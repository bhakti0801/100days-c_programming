#include <stdio.h>

// Define enum for menu choices
enum Operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Operation choice;
    int num1, num2;

    // Display menu
    printf("Menu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    // Ask user to select an operation
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Ask user for two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Perform operation using switch
    switch (choice) {
        case ADD:
            printf("Result: %d\n", num1 + num2);
            break;
        case SUBTRACT:
            printf("Result: %d\n", num1 - num2);
            break;
        case MULTIPLY:
            printf("Result: %d\n", num1 * num2);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
