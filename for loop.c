#include <stdio.h>
int main()
{
    int i, student, total = 0, marks = 0;
    float average;

    printf("Enter number of students: ");
    scanf("%d", &student);

    for (i = 1; i <= student; i++)
   {
      printf("Enter marks: ");
    scanf("%d", &marks);

    total += marks;
   }
    average = (float) total / i;
    printf("Average marks: %.2f\n", average);

    return 0;
}
