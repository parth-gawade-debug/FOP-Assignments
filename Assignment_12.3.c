// this program merges the gcd and scd part using switchcase statements.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1,num2,choice,gcd,scd=-1;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    num1=abs(num1);
    num2=abs(num2);
    printf("Enter 1 to calculate GCD and 2 to calculate SCD: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            for(int i=1; i<=num1 && i<=num2; i++) {
                if(num1%i==0 && num2%i==0) {
                    gcd = i;
                }
            }
            printf("GCD of %d and %d is: %d", num1, num2, gcd);
            break;
        case 2:            for(int i=2; i<=num1 && i<=num2; i++) {
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
            break;
        default:
            printf("Invalid choice");
    }
    return 0;   
}