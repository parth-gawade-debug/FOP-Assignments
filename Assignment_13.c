// this program finds the reverse of a number.
#include<stdio.h>
int main() {
    int num,digit,reverse=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num > 0) {
        digit = num % 10;
        printf("%d",digit);
        num=num/10;
    }
    printf("\n");
    return 0;
}