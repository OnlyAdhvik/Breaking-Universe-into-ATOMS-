#include <stdio.h>

int main() {
    int marks, total = 0, count = 0;
    float average;

    printf("Enter marks for students (enter -1 to stop):\n");

    while (1) { // infinite loop, we'll break manually
        printf("Enter marks: ");
        scanf("%d", &marks);

        if (marks == -1) { // stopping condition
            break;
        }


        total += marks;
        count++;
        }
        if (count > 0)
        {
            average = (float) total / count;
            printf("Total marks: %d\n", total);
            printf ("Average marks: %.2f\n", average);
        }
        else
       {
         printf ("No value entered\n");
       }

  return 0;

    }
