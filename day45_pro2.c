#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string with spaces

    int i = 0;
    while (str[i] != '\0') {
        char ch = str[i];

        // Toggle lowercase to uppercase
        if (ch >= 'a' && ch <= 'z') {
            str[i] = ch - 32;
        }
        // Toggle uppercase to lowercase
        else if (ch >= 'A' && ch <= 'Z') {
            str[i] = ch + 32;
        }
        i++;
    }

    printf("Toggled case string: %s", str);

    return 0;
}
