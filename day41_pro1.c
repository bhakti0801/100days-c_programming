#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string with spaces

    // Count characters until null character '\0'
    while (str[count] != '\0') {
        // To ignore newline character from fgets
        if (str[count] != '\n') {
            count++;
        } else {
            break;
        }
    }

    printf("Number of characters in the string = %d\n", count);

    return 0;
}
