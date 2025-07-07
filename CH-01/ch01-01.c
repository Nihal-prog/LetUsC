// Input the salary, calculate 40% dearness and 20% allowance. And show the total salary too.
#include <stdio.h>

int main()
{
    // Defining variables
    float salary, dearness, housing;

    // Taking input
    printf("Enter your salary: ");
    scanf("%f", &salary);

    // Calculating dearness and housing allowances
    dearness = 0.40 * salary;
    housing = 0.20 * salary;

    // Printing the outputs
    printf("Dearness Allowance [40%]: %.2f\n", dearness);
    printf("Housing Allowance [20%]: %.2f\n", housing);
    printf("Total Salary: %.2f\n", salary + dearness + housing);
    return 0;
}