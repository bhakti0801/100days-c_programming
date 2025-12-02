#include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1; // use long long to handle large numbers

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No even numbers in the range 1 to %d.\n", n);
    } else {
        for (i = 2; i <= n; i += 2) { // loop through even numbers
            product *= i;
        }
        printf("Product of even numbers from 1 to %d is: %llu\n", n, product);
    }

    return 0;
}
