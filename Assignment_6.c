//this function calculates the factorial of a number with or without recursion.
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
//using recursion.
int main() 
{
    int n,i;
    long long fact = 1;
    int recursive(int n) {
        if (n == 0 || n == 1) 
        {
            return 1;
        } 
        else 
        {
            return n * recursive(n - 1);
        }
    }
    printf("Enter a number: ");
    scanf("%d", &n);
    //using factorial without recursion.
    // Factorial is not defined for negative numbers
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } else {
        for (i = 1; i <= n; ++i) {
            fact *= i; // Equivalent to fact = fact * i
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}


