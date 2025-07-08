// Cartesian co-ordinates to polar co-ordinates
#include <stdio.h>
#include <math.h> // To use sqrt() and atan() functions

int main()
{
    // Initialising variables;
    float x, y, r, theta;

    // Taking input
    printf("Enter the x co-ordinate: ");
    scanf("%f", &x);
    printf("Enter the y co-ordinate: ");
    scanf("%f", &y);

    // Calculating the polar coordinates
    r = sqrt(x * x + y * y);                    // Distance from origin
    theta = atan2(y, x);                        // Safer than atan(y/x); Handles x=0 conditions
    float theta_degrees = theta * (180 / 3.1415); // Converting radians to degree

    // Printing the output
    printf("The polar co-ordinates for (%.2f, %.2f) are: (%.2f, %.2f).\n", x, y, r, theta_degrees);
    return 0;
}