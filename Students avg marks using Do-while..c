 #include <stdio.h>
#include <string.h>
int main()
{
    int marks = 0, i, total = 0, student;
    char name [30];
    float average;

    printf("Enter Your Full Name: ");
    fgets(name,sizeof(name),stdin);

    printf("No. of Student(s): ");
    scanf("%d", &student);

    if( student < 1 || student > 10)
    {
        printf("Invalid input. Please enter between 1 and 10");
        return 0;
    }
    for(i = 1; i <= student; i++){
    do {
        printf("Enter Marks: ");
        scanf("%d", &marks);
    if (marks < 0 || marks > 100)
    {
        printf("Invalid marks. Write the Marks again: ");
        scanf("%d", &marks);
    }
    }
    while (marks < 0 || marks > 100);

    total += marks;
}

    average = (float) total / student;
    printf ("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

if(average > 80)
{
    printf ("Above 80%%, damn u some brilliant teacher?\n");
}
else
    {
        printf("Not very good at teaching, eh?\n");
    }
return 0;
}
