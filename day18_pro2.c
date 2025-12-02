#include <stdio.h>

int main() {
    int a, b, tempA, tempB, remainder;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    tempA = a;
    tempB = b;

    // Euclidean algorithm
    while (tempB != 0) {
        remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }

    printf("HCF (GCD) of %d and %d is: %d\n", a, b, tempA);

    return 0;
}
