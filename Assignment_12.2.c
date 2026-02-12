// program to calculate scd of two numbers.
#include <stdio.h>
int main() {
    int num1,num2,scd;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    num1=abs(num1);
    num2=abs(num2);
    for(int i=2; i<=num1 && i<=num2; i++) {
        if(num1%i==0 && num2%i==0) {
            scd = i;
            break;
        }
    }
    if(scd==-1) {
        printf("no common divisor found");
    } else {
        printf("SCD of %d and %d is: %d", num1, num2, scd);
    }
    return 0;   
    
}