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

    int maxSoFar = arr[0];  // maximum sum ending anywhere
    int maxEndingHere = arr[0]; // maximum sum ending at current position

    for (int i = 1; i < n; i++) {
        // Either start a new subarray at i, or extend the current one
        if (maxEndingHere + arr[i] > arr[i]) {
            maxEndingHere = maxEndingHere + arr[i];
        } else {
            maxEndingHere = arr[i];
        }

        if (maxEndingHere > maxSoFar) {
            maxSoFar = maxEndingHere;
        }
    }

    printf("Maximum subarray sum: %d\n", maxSoFar);

    return 0;
}
