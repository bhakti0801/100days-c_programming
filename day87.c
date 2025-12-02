#include <stdio.h>

// Define enumeration for user roles
enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole role;
    int choice;

    // Ask user to select a role
    printf("Select user role:\n");
    printf("0. ADMIN\n1. USER\n2. GUEST\n");
    printf("Enter your choice (0-2): ");
    scanf("%d", &choice);

    // Assign the choice to enum variable
    role = (enum UserRole)choice;

    // Display message based on role
    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have minimal access.\n");
            break;
        default:
            printf("Invalid role selected!\n");
    }

    return 0;
}
