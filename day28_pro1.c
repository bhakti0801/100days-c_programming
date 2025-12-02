#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No prime numbers in this range.\n");
        return 0;
    }

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1; // assume i is prime

        for (j = 2; j * j <= i; j++) { // check divisibility up to sqrt(i)
            if (i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }
