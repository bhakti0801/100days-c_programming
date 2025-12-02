#include <stdio.h>

int main() {
    int n, target;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    int first = -1, last = -1;

    // Find first occurrence
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    // Find last occurrence
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] == target) {
            last = i;
            break;
        }
    }

    printf("First occurrence: %d\n", first);
    printf("Last occurrence: %d\n", last);

    return 0;
}
