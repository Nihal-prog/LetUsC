// Value of an angle as input. Print all the trigonometric ratios.

#include <stdio.h>
#include <math.h>       // To use trig functions
#define PI 3.1415       // Defining PI

int main()
{
    // Initialising variable for angle input
    float angle;

    // Taking inputs
    printf("Enter the angle: \n");
    scanf("%f", &angle);

    // Converting degree to radians
    float angle_radian = angle * (PI / 180);

    // Printing the output
    printf("Sin %.0f = %.4f\n", angle, sin(angle_radian));
    printf("Cos %.0f = %.4f\n", angle, cos(angle_radian));
    printf("Tan %.0f = %.4f\n", angle, tan(angle_radian));
    printf("Coses %.0f = %.4f\n", angle, (1.0 / sin(angle_radian)));
    printf("Sec %.0f = %.4f\n", angle, (1.0 / cos(angle_radian)));
    printf("Cot %.0f = %.4f\n", angle, (1.0 / tan(angle_radian)));
    return 0;
}