#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    printf("Enter the file name: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    int characters = 0, words = 0, lines = 0;
    char ch;
    int inWord = 0; // flag to track if currently inside a word

    while ((ch = fgetc(file)) != EOF) {
        characters++; // count every character

        if (ch == '\n') {
            lines++; // count lines
        }

        if (isspace(ch)) {
            inWord = 0; // outside a word
        } else if (!inWord) {
            words++;    // start of a new word
            inWord = 1;
        }
    }

    // If file is not empty but does not end with newline, count last line
    if (characters > 0 && ch != '\n') {
        lines++;
    }

    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
