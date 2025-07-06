#include <stdio.h>

int main()
{
    float salary, dearness, housing;
    printf("Enter your salary: ");
    scanf("%f", &salary);
    dearness = 0.40 * salary;
    housing = 0.20 * salary;
    printf("Dearness Allowance [40%]: %f\n", dearness);
    printf("Housing Allowance [20%]: %f\n", housing);
    printf("Total Salary: %f\n", salary + dearness + housing);
    return 0;
}