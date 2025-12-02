#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string with spaces

    // Find the length of the string manually
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Reverse the string
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
