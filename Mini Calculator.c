// mini calculator that does basic operations.
#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your Choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers with a gap (without commas): ");
    scanf("%f %f", &a, &b);

    switch (choice)
    {
        case 1:
            printf("Result: %.2f\n", a+b);
            break;
        case 2:
            printf("Result: %.2f\n", a-b);
            break;
        case 3:
            printf("Result: %.2f\n", a*b);
            break;

        case 4:
           if (b != 0)
           printf("Result: %.2f\n", a/b);

           else
            printf("Error, this division is not possible\n");
            break;

           default:
               printf("Invalid choice\n");
    return 0;
}
}
