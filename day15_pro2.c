#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num; // store original number

    while (num != 0) {
        remainder = num % 10;       // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num /= 10;                  // remove last digit
    }

    printf("Reverse of %d is: %d\n", original, reversed);

    return 0;
}
