#include <stdio.h>
#include <string.h> // only for strcat and strcpy

int main() {
    char str1[1000], str2[1000], temp[2000];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int len1 = 0, len2 = 0;

    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    if (len1 != len2) {
        printf("Strings are not rotations of each other.\n");
        return 0;
    }

    // Concatenate str1 with itself
    for (int i = 0; i < len1; i++) temp[i] = str1[i];
    for (int i = 0; i < len1; i++) temp[len1 + i] = str1[i];
    temp[2*len1] = '\0';

    // Check if str2 is a substring of temp
    int found = 0;
    for (int i = 0; i <= 2*len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (temp[i+j] != str2[j]) break;
        }
        if (j == len2) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("The second string is a rotation of the first string.\n");
    else
        printf("The second string is not a rotation of the first string.\n");

    return 0;
}
