#include <stdio.h>
#include <math.h>

int main()
{
    double x, sum = 0.0, a, term;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    a = (x - 1) / x;
    for (int i = 1; i <= 7; i++) // i != 0; Since 1/0 = inf.
    {
        term = (1.0 / i) * pow(a, i);
        printf("%lf\n", term);
        sum += term;
    }
    printf("Sum of first 7 terms is: %lf\n", sum);
    return 0;
}