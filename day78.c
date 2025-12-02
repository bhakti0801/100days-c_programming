#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;

    // Ask user for the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read each character
    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {  // consider only alphabetic characters
            ch = tolower(ch);  // convert to lowercase for simplicity
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Close the file
    fclose(file);

    // Display counts
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
