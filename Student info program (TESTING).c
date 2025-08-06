#include <stdio.h>
// Student name, roll number, grade, Attendance %
/* 
 * Developed by Rishi @ NIT Jalandhar
 * Licensed under MIT
 */

int main()
{
    char student_name[] = "Adhvik";
    int roll_no = 001;
    float attendance = 97.7;
    char grade = 'A';

    printf("Student Name: %s\n",student_name);
    printf("Roll Number: %d\n", roll_no);
    printf("Attendance: %.2f\n", attendance);
    printf("Grade: %c\n", grade);
}

