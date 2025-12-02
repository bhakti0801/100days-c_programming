#include <stdio.h>

// Define an enum for user roles
enum UserRole {
    ADMIN,
    USER,
    GUEST,
    ROLE_COUNT  // Helper to get the total number of roles
};

int main() {
    // Array of strings corresponding to enum names
    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};

    printf("Enum Names and Values:\n");

    // Loop through the enum values
    for (int i = 0; i < ROLE_COUNT; i++) {
        printf("%s = %d\n", roleNames[i], i);
    }

    return 0;
}

