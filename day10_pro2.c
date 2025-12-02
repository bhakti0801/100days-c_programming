#include <stdio.h>

int main() {
    int day;

    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Day is Sunday\n");
            break;
        case 2:
            printf("Day is Monday\n");
            break;
        case 3:
            printf("Day is Tuesday\n");
            break;
        case 4:
            printf("Day is Wednesday\n");
            break;
        case 5:
            printf("Day is Thursday\n");
            break;
        case 6:
            printf("Day is Friday\n");
            break;
        case 7:
            printf("Day is Saturday\n");
            break;
        default:
            printf("Invalid input! Enter a number between 1 and 7.\n");
    }

    return 0;
}
