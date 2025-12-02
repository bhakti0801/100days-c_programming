#include <stdio.h>

int main() {
    int n, k;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter size of subarray k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 0;
    }

    // Brute-force approach
    for (int i = 0; i <= n - k; i++) {
        int found = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                printf("%d ", arr[i + j]);
                found = 1;
                break; // first negative found
            }
        }
        if (!found) {
            printf("0 ");
        }
    }
    printf("\n");

    return 0;
}
