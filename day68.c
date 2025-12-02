#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (all numbers from 0 to %d except one):\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sum of all numbers from 0 to n
    int totalSum = n * (n + 1) / 2;

    // Sum of array elements
    int arrSum = 0;
    for (int i = 0; i < n; i++) {
        arrSum += arr[i];
    }

    int missing = totalSum - arrSum;

    printf("Missing number: %d\n", missing);

    return 0;
}

