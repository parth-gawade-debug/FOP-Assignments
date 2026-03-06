// This program demonstrates the use of structures in C to represent a student and their information.
#include <stdio.h>

int main() {
    float marks1, marks2, marks3, avg;
    int roll_no, prn, i;
    char student_name[50];

    for (i = 1; i <= 3; i++) {
        printf("\n--- Student %d ---\n", i);

        printf("Enter student name: ");
        scanf("%s", student_name);

        printf("Enter roll number: ");
        scanf("%d", &roll_no);

        printf("Enter PRN of the student: ");
        scanf("%d", &prn);

        printf("Enter marks of subject 1: ");
        scanf("%f", &marks1);

        printf("Enter marks of subject 2: ");
        scanf("%f", &marks2);

        printf("Enter marks of subject 3: ");
        scanf("%f", &marks3);

        avg = (marks1 + marks2 + marks3) / 3;
        printf("Average marks of %s: %.2f\n", student_name, avg);
    }

    return 0;
}