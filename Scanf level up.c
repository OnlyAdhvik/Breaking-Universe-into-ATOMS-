// 3 subject marks and grade. if marks are >33 and average >40 then pass otherwise fail
/* 
 * Developed by Adhvik @ NIT Jalandhar
 * Licensed under MIT
 */
#include <stdio.h>
int main()
{
    char name[20] ;
    char grade;
    float Physics, Chemistry, Maths, Average;

     printf("\n---Report Card----\n");

    printf("Enter your Name: ");
    scanf(" %s", name);

    printf("Enter your Grade(A-E): ");
    scanf(" %c", &grade);

    printf("Physics Marks(0-100): ");
    scanf("%f", &Physics);

    printf("Chemistry's Marks(0-100): ");
    scanf("%f", &Chemistry);

    printf("Math's Marks(0-100): ");
    scanf("%f", &Maths);

    Average = (Physics + Chemistry + Maths) / 3;
    if ( Physics > 33 && Chemistry > 33 && Maths > 33 && Average > 40)
{

        printf("Result: PASS\n");
}
    else
   {
        printf("Result: FAIL\n");
   }
    printf("Your name is %s\n", name);
    printf("Grade secured is %c\n", grade);
    printf("Physics marks are %f\n", Physics);
    printf("Chemistry marks are %f\n", Chemistry);
    printf("Maths marks are %f\n", Maths);
    printf("Average marks are %f\n", Average);
    return 0;





