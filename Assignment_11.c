//program to compute square, square root, cube, cube root, factorial, prime factors.
#include<stdio.h>
#include<math.h>
int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int prime_factors(int n) {
    printf("Prime factors of %d are: ", n);
    for(int i = 2; i <= n; i++) {
        while(n % i == 0) {
            printf("%d, ", i);
            n /= i;
        }
    }
    printf("\n");
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Square of %d is: %d\n", num, num*num);

    printf("Square root of %d is: %.2f\n", num, sqrt(num));
    printf("Cube of %d is: %ld\n", num, (long)num*num*num);

    printf("Cube root of %d is: %.2f\n", num, cbrt(num));
    printf("Factorial of %d is: %d\n", num, factorial(num));
    prime_factors(num);
    return 0;
}