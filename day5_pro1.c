#include <stdio.h>

int main() {
    double P, R, T;
    double SI, CI;

    printf("Enter principal: ");
    scanf("%lf", &P);

    printf("Enter rate of interest: ");
    scanf("%lf", &R);

    printf("Enter time (in years): ");
    scanf("%lf", &T);

    // Simple Interest
    SI = (P * R * T) / 100;

    // Compound Interest without math.h (using a loop)
    double amount = 1.0;
    double rate = 1 + (R / 100);

    for (int i = 0; i < (int)T; i++) {
        amount = amount * rate;
    }

    CI = (P * amount) - P;

    printf("Simple Interest = %.2lf\n", SI);
    printf("Compound Interest = %.2lf\n", CI);

    return 0;
}
