#include <stdio.h>

int main() {
    long num;
    int count[10] = {0}; // to store frequency of digits 0-9

    printf("Enter an integer number: ");
    scanf("%ld", &num);

    if (num < 0) {
        num = -num; // make number positive
    }

    // Count frequency of each digit
    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with maximum frequency
    int maxCount = count[0];
    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most, %d times.\n", maxDigit, maxCount);

    return 0;
}
