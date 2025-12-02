#include <stdio.h>

int main() {
    int n, key;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n + 1]; // one extra space for the new element

    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Find the correct position for insertion
    int i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i]; // shift elements to the right
        i--;
    }
    arr[i + 1] = key; // insert the new element

    n++; // new size of the array

    // Print updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
