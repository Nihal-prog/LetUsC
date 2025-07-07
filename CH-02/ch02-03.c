// Calculate the area of a triagle with sides given.
// Including necessary header files. <math.h> for 'sqrt()'
#include <stdio.h>
#include <math.h>

int main()
{
    // Initialising variables
    float a, b, c, s, area = 0;

    // Taking inputs
    printf("Enter the length of side a: ");
    scanf("%f", &a);
    printf("Enter the length of side b: ");
    scanf("%f", &b);
    printf("Enter the length of side c: ");
    scanf("%f", &c);

    // Quick check whether the triangle is valid or not
    if (a + b > c && b + c > a && a + c > b)
    {
        // If valid; Applying Herons formula
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        // Printing the output
        printf("Area of Triangle with lengths (%.2f, %.2f, %.2f) is: %.2f\n", a, b, c, area);
    }
    else
    {
        // If invalid, Print the following
        printf("That doesn't make a triangle.\n");
    }
    return 0;
}