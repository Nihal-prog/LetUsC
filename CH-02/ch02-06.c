// Calculating the Wind Chill Factor

#include <stdio.h>
#include <math.h> // To use the pow() function

int main()
{
    // Initialising variables
    float t, v, wcf;

    // Taking inputs
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &t);
    printf("Enter the velocity in miles/hour: ");
    scanf("%f", &v);

    // Calculating the WCF
    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);

    // Printing the output
    printf("The Wind Chill Factor is likely: %fF\n", wcf);
    return 0;
}