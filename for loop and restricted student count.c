#include <stdio.h>
int main() {
    int marks = 0, i, student, total = 0;
    float average;

    printf("Enter number of students (1-5): ");
    scanf("%d", &student);

    if (student < 1 || student > 5) {
        printf("Invalid Input! Number of students must be 1 to 5.\n");
        return 0;
    }

    for (i = 1; i <= student; i++) {
        printf("Enter marks for student %d (0-100): ", i);
        scanf("%d", &marks);

        if (marks < 0 || marks > 100) {
            printf("Invalid marks! Please enter between 0-100.\n");
            return 0;
        }

        total += marks;
    }

    average = (float) total / student;

    printf("\nYour total marks are: %d", total);
    printf("\nYour average is: %.2f\n", average);

    return 0;
}
