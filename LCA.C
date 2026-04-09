// THIS IS MY LCA.(ARRAY OF STRUCTURE) IMPLEMENTATION
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    printf("Enter the number of students: ");// inputing the number of students.
    scanf("%d", &n);

    // defining a structure
    struct Student {
        char name[50];
        int roll_no;
        float marks[3];
        float avg;
    }; //here we have used a semicolon bcoz to end the structure definition.

    // Creating an array of structures to hold information for n number of students.
    struct Student students[n]; // here we are creating an array of structure to hold the information of n number of students.here students is an array of structures.

    // Input student information
    for (i = 0; i < n; i++) { // here we are using a for loop to input the information of n number of students.
        printf("\n--- Student %d ---\n", i + 1);// here we have used i+1 because we want to start the student number from 1 instead of 0.
        printf("Enter student name: ");
        scanf("%s", students[i].name);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter marks of subject 1: ");
        scanf("%f", &students[i].marks[0]);
        printf("Enter marks of subject 2: ");
        scanf("%f", &students[i].marks[1]);
        printf("Enter marks of subject 3: ");
        scanf("%f", &students[i].marks[2]);

        // Calculation of average marks for each student
        students[i].avg = (students[i].marks[0] + students[i].marks[1] + students[i].marks[2]) / 3;
    }
    for (i = 0; i < n; i++) {// here we are using  a for loop to print the information of n number of students.
        printf("\n--- Student %d ---\n", i + 1);// here we have used i+1 because we want to start the student number from 1 instead of 0.
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Average Marks: %.2f\n", students[i].avg);
    }

    return 0;
}