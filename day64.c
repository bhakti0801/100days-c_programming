#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];

    printf("Enter a string: ");
    scanf("%s", s); // reads a string without spaces

    int n = strlen(s);
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        int seen[256] = {0}; // track characters in current substring
        int len = 0;
        for (int j = i; j < n; j++) {
            if (seen[(unsigned char)s[j]] == 1) {
                break; // repeated character found
            } else {
                seen[(unsigned char)s[j]] = 1;
                len++;
            }
        }
        if (len > maxLen) {
            maxLen = len;
        }
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
