#include <stdio.h>

int main() {
    char str[1000];
    char result[1000]; // to store string without vowels
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string with spaces

    int i = 0;
    while (str[i] != '\0') {
        char ch = str[i];

        // Check if character is not a vowel
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result[j] = ch;
            j++;
        }
        i++;
    }
    result[j] = '\0'; // terminate the string

    printf("String after removing vowels: %s", result);

    return 0;
}
