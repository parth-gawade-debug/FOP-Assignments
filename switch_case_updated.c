#include <stdio.h>
#include <math.h>

// Function declaration
int factorial(int num);

int main() {
    float num1, num2, result;
    int ch;
    
    printf("-------menu-------\n");
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    printf("press 5 for power\n");
    printf("press 6 for factorial\n");
    printf("enter your preference: ");
    scanf("%d", &ch);
    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    
    switch(ch) {
        case 1:
            printf("addition: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("subtraction: %.2f\n", num1 - num2);
            break;
        case 3:
            printf("multiplication: %.2f\n", num1 * num2);
            break;
        case 4:
            if(num2 == 0) {
                printf("division by zero is not possible\n");
            } else {
                printf("division: %.2f\n", num1 / num2);
            }
            break;
        case 5:
            result = pow(num1, num2);
            printf("power: %.2f\n", result);
            break;
        case 6:
            printf("factorial: %d\n", factorial((int)num1));
            break;
        default:
            printf("wrong input\n");
    }
    
    return 0;
}


int factorial(int num) {
    if(num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}
