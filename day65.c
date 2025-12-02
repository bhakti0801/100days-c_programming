#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];

    printf("Enter first string: ");
    scanf("%s", s); // read string without spaces

    printf("Enter second string: ");
    scanf("%s", t);

    int countS[26] = {0}; // frequency of characters in s
    int countT[26] = {0}; // frequency of characters in t

    // If lengths differ, they can't be anagrams
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    // Count frequency of each character in s and t
    for (int i = 0; s[i] != '\0'; i++) {
        countS[s[i] - 'a']++;
        countT[t[i] - 'a']++;
    }

    // Compare frequency arrays
    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (countS[i] != countT[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
