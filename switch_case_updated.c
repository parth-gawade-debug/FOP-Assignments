#include <stdio.h>
#include <math.h>
int main() {
    float num1;
    float num2;
    int ch;
    float result;
    float factorial(float num1) {
        if(num1==0) {
            return 1;
        }
        else {
            return num1*factorial(num1-1);
        }
    }
    result=pow(num1,num2);


    printf("-------menu-------\n");
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    printf("enter your preference:");

    scanf("%f",&num1);
    scanf("%f",&num2);
    scanf("%d",&ch);

    switch(ch) {
        case 1:
        printf("addition:%.2f\n",num1+num2);
        break;
        case 2:
        printf("subtraction%.2f\n",num1-num2);
        break;
        case 3: 
        printf("multiplication%.2f\n",num1*num2);
        break;
        case 4:
        printf("division%.2f\n",num1/num2);
        break;
        case 5:
        printf("power:%.2f\n",result);
        break;
        case 6:
        printf("factorial:%.2f\n",factorial(num1));
        break;
        default:
        printf("wrong input");
    }
    return 0;
}