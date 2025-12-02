#include <stdio.h>

int main() {
    int a, b, tempA, tempB, remainder, hcf, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    // Store original numbers
    tempA = a;
    tempB = b;

    // Find HCF using Euclidean algorithm
    while (tempB != 0) {
        remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }
    hcf = tempA;

    // Calculate LCM
    lcm = (a * b) / hcf;

    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}
