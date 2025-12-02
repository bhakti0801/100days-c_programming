#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string with spaces

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] != '\n') { // ignore newline character
            printf("%c\n", str[i]);
        }
        i++;
    }

    return 0;
}
