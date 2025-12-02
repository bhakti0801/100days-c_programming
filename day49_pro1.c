#include <stdio.h>

int main() {
    char name[1000];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // read full name with spaces

    int i = 0;

    // Print the first character as the first initial (if not a space)
    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c", name[0]);
    }

    // Traverse the string
    while (name[i] != '\0') {
        // If a space is found, the next character is an initial
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0' && name[i+1] != '\n') {
            printf("%c", name[i+1]);
        }
        i++;
    }

    printf("\n");
    return 0;
}
