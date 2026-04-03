// This program creates a structure employee and demonstrates how to use it to store and display employee information.
// find total no.of emp in an organization,count male and female emp, emp with a salarygreaterthan 10,000
//emp with designation "assistant manager".
//user will input the total no of employees

#include <stdio.h>
#include <string.h>
struct Employee {
    char name[50];
    char designation[50];
    char gender[10];
    int date_of_joining;
    float salary;
};
int main() {
    int n;
    int male_count = 0, female_count = 0;
    char gender[10];
    printf("Enter the total number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Designation: ");
        scanf("%s", employees[i].designation);
        printf("Gender: ");
        scanf("%s", employees[i].gender);
        printf("Date of Joining:");
        scanf("%d", &employees[i].date_of_joining);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }
    for (i = 0; i < n; i++) {
        if (strcmp(employees[i].gender, "male") == 0) {
            male_count++;
        } else if (strcmp(employees[i].gender, "female") == 0) {
            female_count++;
        }
    }
    printf("Total no of male employees: %d\n", male_count);
    printf("Total no of female employees: %d\n", female_count);
    printf("Employees with salary greater than 10,000:\n");
    for (i = 0; i < n; i++) {
        if (employees[i].salary > 10000) {
            printf("%s\n", employees[i].name);
        }
    }
    printf("Employees with designation 'assistant manager':\n");
    for (i = 0; i < n; i++) {
        if (strcmp(employees[i].designation, "assistant_manager") == 0) {
            printf("%s\n", employees[i].name);
        }
    }
    return 0;
}