#include <stdio.h>

int main() {
    FILE *file;
    int n, i;
    
    // Structure to hold student information
    struct Student {
        char name[50];
        int roll;
        float marks;
    } student;

    // Ask user for number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Open file in write mode
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Input student records and write to file
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", student.name); // no spaces in name
        printf("Roll Number: ");
        scanf("%d", &student.roll);
        printf("Marks: ");
        scanf("%f", &student.marks);

        fprintf(file, "%s %d %.2f\n", student.name, student.roll, student.marks);
    }

    fclose(file);
    printf("\nStudent records saved successfully.\n");

    // Open file in read mode
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("\nStudent Records from File:\n");
    printf("--------------------------\n");

    // Read and display student records
    while (fscanf(file, "%s %d %f", student.name, &student.roll, &student.marks) == 3) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", student.name, student.roll, student.marks);
    }

    fclose(file);

    return 0;
}
