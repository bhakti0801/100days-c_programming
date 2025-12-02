#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // number of rows

    for (i = 1; i <= rows; i++) {
        // print spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        // print stars
        for (j = 1; j <= rows - i + 1; j++) {
            printf("*");
        }
        printf("\n"); // move to next line
    }

    return 0;
}
