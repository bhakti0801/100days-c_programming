#include <stdio.h>

int main() {
    int rows = 5;  // number of rows

    for (int i = 1; i <= rows; i++) {
        // print leading spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // print numbers
        for (int num = rows - i + 1; num <= 5; num++) {
            printf("%d", num);
        }
        printf("\n"); // move to next line
    }

    return 0;
}
