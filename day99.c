#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student *s;

    // malloc() without including stdlib.h
    s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter Roll: ");
    scanf("%d", &s->roll);

    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Marks: ");
    scanf("%f", &s->marks);

    printf("\n--- Student Details ---\n");
    printf("Roll: %d\n", s->roll);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);

    return 0;   // cannot use free() because <stdlib.h> is not allowed
}
