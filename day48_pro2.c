#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); // read sentence with spaces

    int i = 0, start, end;

    while (str[i] != '\0' && str[i] != '\n') {
        // Skip spaces
        while (str[i] == ' ') i++;

        if (str[i] == '\0' || str[i] == '\n') break;

        // Start index of the word
        start = i;

        // Find end index of the word
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') i++;
        end = i - 1;

        // Reverse the word in place
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }

    printf("Sentence after reversing each word: %s", str);

    return 0;
}
