//this program calculates the average marks of three students.
#include <stdio.h>
int main() {
    float marks1, marks2, marks3, average;

    // Input marks for three students
    printf("Enter marks for student 1: ");
    scanf("%f", &marks1);
    
    printf("Enter marks for student 2: ");
    scanf("%f", &marks2);
    
    printf("Enter marks for student 3: ");
    scanf("%f", &marks3);

    // Calculate the average
    average = (marks1 + marks2 + marks3) / 3;

    // Output the average
    printf("The average marks of the three students is: %.2f\n", average);

    return 0;
}