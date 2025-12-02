#include <stdio.h>

int main() {
    char filename[100];
    char text[500];

    // Get filename from user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file in append mode
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Clear input buffer
    getchar(); // consume the leftover newline from previous input

    // Get text to append
    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);  // read a full line including spaces

    // Append text to file
    fprintf(file, "%s", text);

    printf("Text appended successfully.\n");

    // Close the file
    fclose(file);

    return 0;
}
