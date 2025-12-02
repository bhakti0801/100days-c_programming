#include <stdio.h>

// Define an enum for status codes
enum Status {
    SUCCESS = 10,
    FAILURE = 20,
    TIMEOUT = 30
};

int main() {
    enum Status s1 = SUCCESS;
    enum Status s2 = FAILURE;
    enum Status s3 = TIMEOUT;

    // Print enum values to show they are integers
    printf("SUCCESS = %d\n", s1);
    printf("FAILURE = %d\n", s2);
    printf("TIMEOUT = %d\n", s3);

    // Perform arithmetic operation using enum values
    int sum = s1 + s2 + s3;
    printf("Sum of enum values: %d\n", sum);

    return 0;
}
