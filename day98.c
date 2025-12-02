#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

// Function to compare two strings manually
int compareString(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i])
            return 0;   // not equal
        i++;
    }
    // If both strings ended together → equal
    return (a[i] == '\0' && b[i] == '\0');
}

int main() {
    struct Student s1, s2;

    // Input for first student
    printf("Enter details of Student 1:\n");
    printf("Roll: ");
    scanf("%d", &s1.roll);
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    // Input for second student
    printf("\nEnter details of Student 2:\n");
    printf("Roll: ");
    scanf("%d", &s2.roll);
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    // Compare both structures
    if (s1.roll == s2.roll &&
        compareString(s1.name, s2.name) &&
        s1.marks == s2.marks) 
    {
        printf("\nBoth structures are IDENTICAL.\n");
    } 
    else {
        printf("\nStructures are NOT identical.\n");
    }

    return 0;
}
