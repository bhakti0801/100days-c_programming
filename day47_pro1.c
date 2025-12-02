#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int freq1[26] = {0}, freq2[26] = {0};

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of lowercase letters in first string
    int i = 0;
    while (str1[i] != '\0' && str1[i] != '\n') {
        char ch = str1[i];
        if (ch >= 'a' && ch <= 'z') {
            freq1[ch - 'a']++;
        } else if (ch >= 'A' && ch <= 'Z') {
            freq1[ch - 'A']++;
        }
        i++;
    }

    // Count frequency of lowercase letters in second string
    i = 0;
    while (str2[i] != '\0' && str2[i] != '\n') {
        char ch = str2[i];
        if (ch >= 'a' && ch <= 'z') {
            freq2[ch - 'a']++;
        } else if (ch >= 'A' && ch <= 'Z') {
            freq2[ch - 'A']++;
        }
        i++;
    }

    // Compare frequency arrays
    int isAnagram = 1;
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}
