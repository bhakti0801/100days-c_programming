#include <stdio.h>

int main() {
    int groups[] = {1, 3, 5, 3, 1};  // number of stars in each group
    int totalGroups = 5;

    for (int i = 0; i < totalGroups; i++) {
        for (int j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
        printf("\n"); // blank line between groups
    }

    return 0;
}
