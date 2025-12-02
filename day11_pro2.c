#include <stdio.h>

int main() {
    float CP, SP, profit, loss;
    
    printf("Enter Cost Price: ");
    scanf("%f", &CP);
    
    printf("Enter Selling Price: ");
    scanf("%f", &SP);
    
    if (SP > CP) {
        profit = SP - CP;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", (profit / CP) * 100);
    }
    else if (CP > SP) {
        loss = CP - SP;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", (loss / CP) * 100);
    }
    else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
