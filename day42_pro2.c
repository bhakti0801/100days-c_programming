#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string with spaces

    int i = 0;
    while (str[i] != '\0') {
        // Convert lowercase letters to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // ASCII difference between lowercase and uppercase
        }
        i++;
    }

    printf("Uppercase string: %s", str);

    return 0;
}
