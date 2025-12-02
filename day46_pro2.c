#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0}; // Frequency array for lowercase letters

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string with spaces

    int i = 0;
    char repeating = '\0';

    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];

        // Check if character is lowercase alphabet
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;

            // If frequency becomes 2, it's repeating
            if (freq[ch - 'a'] == 2) {
                repeating = ch;
                break;
            }
        }
        i++;
    }

    if (repeating != '\0')
        printf("The first repeating lowercase alphabet is '%c'\n", repeating);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
