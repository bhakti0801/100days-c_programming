#include <stdio.h>

int main() {
    char date[20];
    int day, month, year;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    // Parse day, month, and year
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // Array of month abbreviations
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    if (month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 0;
    }

    // Print in new format
    printf("Formatted date: %02d-%s-%d\n", day, months[month - 1], year);

    return 0;
}
