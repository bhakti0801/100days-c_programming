#include <stdio.h>

int main() {
    char str[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string with spaces

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("The character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}
