#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read a line including spaces

    // Convert first character to uppercase if it's a letter
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 'a' + 'A';
    }

    // Convert the rest to lowercase
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }

    printf("Sentence case: %s", str);

    return 0;
}
