#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("All substrings of the string are:\n");

    // Generate all substrings
    for (int start = 0; start < length; start++) {
        for (int end = start; end < length; end++) {
            for (int k = start; k <= end; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
