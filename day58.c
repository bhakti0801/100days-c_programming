#include <stdio.h>

int main() {
    int n;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int answer[n];

    // Compute the product of all elements
    int totalProduct = 1;
    int zeroCount = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            zeroCount++;
        } else {
            totalProduct *= nums[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (zeroCount > 1) {
            answer[i] = 0; // more than one zero, all products are zero
        } else if (zeroCount == 1) {
            if (nums[i] == 0) {
                answer[i] = totalProduct; // only zero element gets product of others
            } else {
                answer[i] = 0; // all other elements multiplied by zero
            }
        } else {
            answer[i] = totalProduct / nums[i]; // normal case
        }
    }

    // Print the answer array
    printf("Output array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1) printf(", ");
    }
    printf("\n");

    return 0;
}
