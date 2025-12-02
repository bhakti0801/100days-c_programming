#include <stdio.h>

int main() {
    char filename[100];
    char line[256];

    // Ask user for the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try to open the file in read mode
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: File '%s' does not exist.\n", filename);
        return 1;
    }

    // Read and display file content line by line
    printf("Contents of '%s':\n", filename);
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}
