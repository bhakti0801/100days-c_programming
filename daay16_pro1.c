#include <stdio.h>

int main() {
    int num, i;
    int binary[32]; // to store binary digits (assuming 32-bit integer)
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 0;
    }

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Convert decimal to binary
    i = 0;
    while (num > 0) {
        binary[i] = num % 2; // store remainder
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    for (i = i - 1; i >= 0; i--) { // print in reverse order
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
