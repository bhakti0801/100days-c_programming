#include <stdio.h>

int main() {
    int i, j;
    int rows = 4; // number of rows in top half (including middle row)

    // Top half (including middle row)
    for (i = 1; i <= rows; i++) {
        // print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // print stars
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half
    for (i = rows - 1; i >= 1; i--) {
        // print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // print stars
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
