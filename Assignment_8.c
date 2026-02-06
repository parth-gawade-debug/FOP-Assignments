// program to accept marks of 5 subjects and compute the result.(grading system)
#include<stdio.h>
int main() {
    int M1, M2, M3, M4, M5;
    float percentage;
    printf("Enter marks of M1 subject:");
    scanf("%d", &M1);
    printf("Enter marks of M2 subject:");
    scanf("%d", &M2);
    printf("Enter marks of M3 subject:");
    scanf("%d", &M3);
    printf("Enter marks of M4 subject:");
    scanf("%d", &M4);
    printf("Enter marks of M5 subject:");
    scanf("%d", &M5);
    percentage = (M1 + M2 + M3 + M4 + M5) / 5.0;
    printf("Percentage: %.2f\n", percentage);
    if(percentage >= 75) {
        printf("Distinction\n");
    }
    else if(percentage >=60 && percentage < 75) {
        printf("First Class\n");
    }
    else if(percentage >=50 && percentage < 60) {
        printf("Second Class\n");
    }
    else if(percentage >=40 && percentage < 50) {
        printf("Third Class\n");
    }
    else {
        printf("Fail\n");
    }
    return 0;
}
