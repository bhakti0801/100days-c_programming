#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // maximum stars in middle row = 2*rows - 1

    // Top half (increasing stars)
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half (decreasing stars)
    for (i = rows - 1; i >= 1; i--) {
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
