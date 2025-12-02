#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num; // store original number

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    while (num != 0) {
        remainder = num % 10; // extract last digit
        sum += remainder;      // add to sum
        num /= 10;             // remove last digit
    }

    printf("Sum of digits of %d is: %d\n", original, sum);

    return 0;
}
