#include <stdio.h>

int main() {
    char str[1000];
    char word[100];
    char longest[100] = "";
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); // read sentence with spaces

    int i = 0, j = 0;

    while (1) {
        char ch = str[i];

        // If space, newline, or end of string, current word ends
        if (ch == ' ' || ch == '\n' || ch == '\0') {
            word[j] = '\0'; // terminate current word

            if (j > maxLength) {
                maxLength = j;
                int k;
                for (k = 0; k <= j; k++) {
                    longest[k] = word[k]; // copy current word to longest
                }
            }
            j = 0; // reset for next word

            if (ch == '\0') break; // end of string
        } else {
            word[j] = ch;
            j++;
        }
        i++;
    }

    printf("The longest word is: %s\n", longest);

    return 0;
}
