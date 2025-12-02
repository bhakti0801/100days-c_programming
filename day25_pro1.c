#include <stdio.h>

int main() {
    int rows = 5;  // number of rows

    for (int i = 1; i <= rows; i++) {       // outer loop for rows
        for (int j = rows - i + 1; j <= 5; j++) { // inner loop prints numbers
            printf("%d", j);
        }
        printf("\n");                        // move to next line after each row
    }

    return 0;
}
