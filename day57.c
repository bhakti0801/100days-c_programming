#include <stdio.h>

int main() {
    int n;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int prevGreater[n];

    // Brute force approach
    for (int i = 0; i < n; i++) {
        prevGreater[i] = -1; // default if no greater element is found
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater[i] = arr[j];
                break; // stop at the first greater element on the left
            }
        }
    }

    // Print the results in comma-separated fashion
    for (int i = 0; i < n; i++) {
        printf("%d", prevGreater[i]);
        if (i != n - 1) printf(", ");
    }
    printf("\n");

    return 0;
}
