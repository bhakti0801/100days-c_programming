#include <stdio.h>

int main() {
    int num, original, remainder, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    original = num;

    while (num != 0) {
        remainder = num % 10;

        // Calculate factorial of the digit
        int factorial = 1;
        for (int i = 1; i <= remainder; i++) {
            factorial *= i;
        }

        sum += factorial;
        num /= 10;
    }

    if (sum == original) {
        printf("%d is a Strong number.\n", original);
    } else {
        printf("%d is not a Strong number.\n", original);
    }

    return 0;
}
