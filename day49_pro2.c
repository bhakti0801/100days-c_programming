#include <stdio.h>

int main() {
    char name[1000];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // read full name with spaces

    int i = 0;
    int lastSpaceIndex = -1;

    // Find the last space to separate the surname
    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] == ' ') {
            lastSpaceIndex = i;
        }
        i++;
    }

    // Print initials of first and middle names
    for (i = 0; i <= lastSpaceIndex; i++) {
        if (i == 0 && name[i] != ' ') {
            printf("%c. ", name[i]); // First initial
        }
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0' && name[i+1] != '\n') {
            printf("%c. ", name[i+1]); // Middle initials
        }
    }

    // Print surname in full
    if (lastSpaceIndex != -1) {
        i = lastSpaceIndex + 1;
        while (name[i] != '\0' && name[i] != '\n') {
            printf("%c", name[i]);
            i++;
        }
    }

    printf("\n");
    return 0;
}
