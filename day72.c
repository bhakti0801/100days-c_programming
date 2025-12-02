#include <stdio.h>

int main() {
    char line[256]; // buffer to store each line

    // Open the file in read mode
    FILE *file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read and print each line until EOF
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);  // fgets keeps the newline character
    }

    // Close the file
    fclose(file);

    return 0;
}
