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

    int majority = -1;

    // Use Boyer-Moore Voting Algorithm
    int count = 0, candidate = -1;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Verify if candidate is actually majority
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) count++;
    }

    if (count > n / 2) {
        majority = candidate;
    }

    printf("Majority element: %d\n", majority);

    return 0;
}
