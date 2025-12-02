#include <stdio.h>

// Define enum for Gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define struct for a person
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    // Input person details
    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Select gender (0=MALE, 1=FEMALE, 2=OTHER): ");
    int g;
    scanf("%d", &g);
    p.gender = (enum Gender)g;

    // Print person details
    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    printf("Gender: ");
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Invalid gender\n");
    }

    return 0;
}
