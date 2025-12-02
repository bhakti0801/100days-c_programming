#include <stdio.h>

int main() {
    FILE *inFile, *outFile;
    char ch;

    // Open input.txt in read mode
    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output.txt in write mode
    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error: Could not open output.txt\n");
        fclose(inFile);
        return 1;
    }

    // Read each character, convert to uppercase if lowercase, write to output
    while ((ch = fgetc(inFile)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 'a' + 'A';  // convert to uppercase
        }
        fputc(ch, outFile);
    }

    printf("File converted to uppercase and saved in output.txt\n");

    // Close both files
    fclose(inFile);
    fclose(outFile);

    return 0;
}
