//implemeenting sine series.
#include <stdio.h>
#include <math.h>
long fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}
int main() {
    int i,n;
    float sum=0,x;
    printf("enter the value of x in radians:");
    scanf("%f",&x);
    printf("enter the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int power=2*i-1;
        int positiveSign = 1;// here we are using a variable for using signs bcoz we cannot directly use the sign in the formula.
        int negativeSign = -1;
        sum=sum + (positiveSign * pow(x, power) / fact(power));
        positiveSign = -positiveSign;
    }
    printf("addition of the series is: %.2f",sum);
    return 0;
}