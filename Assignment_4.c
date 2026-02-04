// program to calculate the salary of an employee based on the basic salary and the grade.
#include <stdio.h>
int main() {
    float basic_salary, HRA, TA, PT, gross_salary, net_salary;
    printf("enter the basic salary:");
    scanf("%f",&basic_salary);
    
    HRA = 0.2 * basic_salary;
    TA = 0.1 * basic_salary;
    gross_salary = basic_salary + HRA + TA;
    PT =gross_salary * 0.05;
    net_salary = gross_salary - PT;
    printf("net_salary:%.2f\n",net_salary);
    return 0;
}