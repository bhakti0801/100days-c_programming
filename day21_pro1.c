#include <stdio.h>

int main() {
    int num, original, first, last, digits = 0, temp, multiplier = 1, swapped;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    original = num;
    last = num % 10;

    // Count digits and calculate multiplier for first digit
    temp = num;
    while (temp >= 10) {
        temp /= 10;
        multiplier *= 10;
        digits++;
    }
    first = temp;

    if (multiplier == 1) {
        swapped = num; // single-digit number remains the same
    } else {
        // Remove first and last digits
        int middle = (original % multiplier) / 10;

        // Construct swapped number
        swapped = last * multiplier + middle * 10 + first;
    }

    printf("Number after swapping first and last digits: %d\n", swapped);

    return 0;
}
