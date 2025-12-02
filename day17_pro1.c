#include <stdio.h>

int main() {
    int num, original, remainder, n = 0, temp;
    int sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    // Count number of digits
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;

        // Calculate remainder^n manually
        int power = 1;
        for (int i = 1; i <= n; i++) {
            power *= remainder;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
