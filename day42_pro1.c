#include <stdio.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string with spaces

    int i = 0;
    while (str[i] != '\0') {
        char ch = str[i];

        // Check for alphabetic characters
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Convert to lowercase for simplicity
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + 32;
            }

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

        i++;
    }

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    return 0;
}
