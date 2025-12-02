#include <stdio.h>

int main() {
    int num, remainder, product = 1;
    int hasOdd = 0; // flag to check if there is any odd digit

    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num; // store original number

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    while (num != 0) {
        remainder = num % 10; // extract last digit
        if (remainder % 2 != 0) { // check if odd
            product *= remainder;
            hasOdd = 1;
        }
        num /= 10; // remove last digit
    }

    if (hasOdd) {
        printf("Product of odd digits of %d is: %d\n", original, product);
    } else {
        printf("No odd digits found in %d. Product = 0\n", original);
    }

    return 0;
}
