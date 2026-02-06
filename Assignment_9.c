// program to check whether a number is an Armstrong number or not.
// armstrong number is a number that is equal to the sum of the cubes of its digits. For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
#include<stdio.h>
int main() {
    int temp,num,sum=0,digit;
    printf("enter a number:");
    scanf("%d",&num);
    temp=num;
    while (temp!=0) {
        digit=temp%10;
        sum=sum+(digit*digit*digit);
        temp=temp/10;
    }
    if (sum==num) {
        printf("%d is an Armstrong number\n",num);
    }
    else {
        printf("%d is not an Armstrong number\n",num);
    }
    return 0;
}