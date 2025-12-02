#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (one element is repeated):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int xorAll = 0;

    // XOR all elements in the array
    for (int i = 0; i < n; i++) {
        xorAll ^= arr[i];
    }

    // XOR with all numbers from 1 to n-1
    for (int i = 1; i <= n - 1; i++) {
        xorAll ^= i;
    }

    // Result is the repeated element
    printf("Repeated element: %d\n", xorAll);

    return 0;
}
