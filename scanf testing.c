# include <stdio.h>
// student report card demanding: Name, Roll number, Marks in 3 subjects and their average and the Grade.
int main()
{
    char name[] ;
    int roll_number;
    float Physics, Chemistry, Maths, Average;
    char grade;
    printf("\n---Report Card----\n");

    printf("Enter Your Name: ");
    scanf(" %s", name);

    printf("Roll Number: ");
    scanf("%d", &roll_number);

    printf("Physics Marks: ");
    scanf("%f", &Physics);

    printf("Chemistry Marks: ");
    scanf("%f", &Chemistry);

    printf("Maths Marks: ");
    scanf("%f", &Maths);

    printf("Enter Your Grade: ");
    scanf(" %c", &grade);

    Average = (Physics + Chemistry + Maths) / 3;

    printf("Your name is %s\nl", name);
    printf("Your Roll number is %d\n", roll_number);
    printf("Your Grade is %c\n", grade);
    printf("Marks scored in Physics= %.2f\n", Physics);
    printf("Marks scored in Chemistry= %.2f\n", Chemistry);
    printf("Marks scored in Maths= %.2f\n", Maths);
    printf("Average Marks are %.2f\n", Average);
    return 0;

}
