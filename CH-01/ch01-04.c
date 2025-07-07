// Find the area, perimeter, circumference of a rectangle and circle respectively from user inputs.
#include <stdio.h>

int main()
{
    // Initialising variables
    float len, bdth, radii;

    // Taking inputs
    printf("Enter the length of rectange: ");
    scanf("%f", &len);
    printf("Enter the breadth of rectange: ");
    scanf("%f", &bdth);
    printf("Enter the radius of circle: ");
    scanf("%f", &radii);

    // Initialising and operating on the goals
    float peri, area_rec, circmf, area_cir;
    peri = 2 * (len + bdth);
    area_rec = len * bdth;
    circmf = 2 * 3.14 * radii;
    area_cir = 3.14 * radii * radii;

    // Printing the output
    printf("Perimeter of Rectange is %f and Area is %f\n", peri, area_rec);
    printf("Circumference of Circle is %f and Area is %f\n", circmf, area_cir);
    return 0;
}