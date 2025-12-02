#include <stdio.h>

int main() {
    FILE *file;
    int num, sum = 0, count = 0;
    float average;

    // Open numbers.txt in read mode
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    // Read integers and compute sum
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    // Close the file
    fclose(file);

    if (count == 0) {
        printf("No numbers found in the file.\n");
        return 0;
    }

    // Compute average
    average = (float)sum / count;

    // Print results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
